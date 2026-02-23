#include "kernel/types.h"
#include "user/user.h"
#include "kernel/riscv.h"

#define DATA_OFFSET 0x10 // Offset of data array in its page

// shoutout to kiyonn for this
// check out secret.c as well to fully understand this program
int main(void) {
  // Infinite loop until we crash due to running out of memory
  while (1) {
    // Alocate the next page. sbrk returns the previous program break,
    // which in this case is also the start of the new page
    char *maybe_data = sbrk(PGSIZE) + DATA_OFFSET;
    // Check for anchor
    if (strcmp("This may help.", maybe_data) == 0) {
      sbrk(8 * PGSIZE); // Data array is 8 pages long; allocate it.
      printf("secret: %s\n", maybe_data + 16);
      exit(0);
    }
  }
  exit(1);
}

// FAQ: I'm sorry, what's going on here i don't understand ts
// 
// A: Run 'make qemu' then you'll see a secret.asm file created.
// This is the assembly code for secret.c.
// Line 34-39 is the code that copies "This may help." into the data array.
// The first address there is 0x9a0, which is the string hardcoded into the executable
// (otherwise how would the program know what to copy into the data array, duh.)
// The second address is 0x1010, which is the start of the data array that we copy into.
// A page in xv6 is 0x1000 bytes long, so the data array is always at an offset of 0x10 within its page.
// So what this program does is it keeps allocating pages until by chance
// it allocates the old page that contained the data array.
// We know we've found the right page when the anchor string is at offset 0x10 within the page.
// Then to get the secret we allocate enough memory to contain the entire data array (8 pages),
// and read out the secret.
// 
// before sbrk:
// ------------------------------------------------
// physical addr | virtual addr | content
// ------------------------------------------------
// 0x1000        | 0x10000      | sniffer code
// ---------- our program break is here -----------
// 0x2000        | 0x0000       | old secret code
// 0x29a0        | 0x09a0       | "This may help."
// 0x3010        | 0x1010       | start of secret data array (also contains "This may help.")
// 0xb010        | 0x9010       | end of secret data array
// 
// after a few rounds of sbrk we find the anchor string:
// ------------------------------------------------
// physical addr | virtual addr | content
// ------------------------------------------------
// 0x1000        | 0x10000      | sniffer code
// 0x2000        | 0x11000      | old secret code
// 0x29a0        | 0x129a0      | "This may help."
// 0x3010        | 0x13010      | start of secret data array (also contains "This may help.")
// ---------- our program break is here -----------
// 0xb010        | 0x9010      | end of secret data array
// 
// after sbrk(8 * PGSIZE):
// ------------------------------------------------
// physical addr | virtual addr | content
// ------------------------------------------------
// 0x1000        | 0x10000      | sniffer code
// 0x2000        | 0x11000      | old secret code
// 0x29a0        | 0x129a0      | "This may help."
// 0x3010        | 0x13010      | start of secret data array (also contains "This may help.")
// 0xb010        | 0x1b010      | end of secret data array
// ---------- our program break is here -----------
// 
// I have no idea why the prof make this lab so chim but he probably wanted us to do something simpler
// like scan each offset byte by byte instead of this complicated ahh shit. Funny thing is even that doesn't
// always work because you'll probably find the 0x9a0 anchor string and get the wrong data LMAO
