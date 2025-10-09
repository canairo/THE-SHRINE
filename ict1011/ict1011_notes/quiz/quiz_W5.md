### **qn 1: which of the following statements is true?**

-   **ans:** `assembler directives are instructions for the assembler.`
-   **lect slide 12 ("characteristics of assembly programs"):** this slide defines assembler directives as statements that "tell the assembler about the desired characteristics of the program" & are "processed during program assembly."
-   this confirms they are cmds for the assembler tool, not the msp430 cpu.

### **qn 2: the assembler directive "fri .equ 5" will store the value of 5 into the memory of the msp430.**

-   **ans:** `false`
-   **lect slide 42 ("create symbol table entries"):** this slide explains that `.equ` is a text-replacement tool for the assembler. it doesn't allocate or init memory.
-   **appendix b ("several assembler directives that initialises memory"):** this appendix shows that directives like `.byte` & `.word` are used to place values in memory.

### **memory map analysis (for qns 3-7)**

this analysis is based on two key assembler rules derived from the correct answers:
1.  the `.bss` directive does not affect the `.data` location counter (lc).
2.  the assembler automatically aligns `.word` directives to even addresses (addr) by padding.

| addr | directive | stored byte(s) | explanation |
| :--- | :--- | :--- | :--- |
| `0x2000` | `.byte 21, 31` | `15`, `1f` | `21` is `0x15`, `31` is `0x1f`. lc is now `0x2002`. |
| `0x2002` | `.word 0abcdh` | `cd`, `ab` | lc is even. stored little-endian. lc is now `0x2004`. |
| | `.bss sym, 2` | *(none)* | reserves space elsewhere. lc for `.data` stays `0x2004`. |
| `0x2004` | **loc1** `.byte 41` | `29` | **loc1 is `0x2004`**. lc is now `0x2005`. |
| `0x2005` | *(padding)* | `00` | lc is odd. assembler pads to align the next word. |
| `0x2006` | **loc2** `.word 0cdefh` | `ef`, `cd` | **loc2 is `0x2006`**. stored little-endian. lc is now `0x2008`. |

### **qn 3: what is the value of the address label loc2?**

-   **ans:** `2006h`
-   **assembler alignment rule:** the lc is at odd addr `0x2005` after `loc1 .byte 41`. to align the next `.word` directive, the assembler adds a padding byte at `0x2005`, moving the start of loc2 to the next even addr, `0x2006`.

### **qn 4: what is the byte stored at the memory location 0x2000?**

-   **ans:** `0x15`
-   **direct code interpretation:** the `.data` section starts at `0x2000`. the first directive, `.byte 21, 31`, places the decimal value 21 at this start loc.
-   21 in decimal is 15h.

### **qn 5: what is the value of the address label loc1?**

-   **ans:** `2004h`
-   **assembler lc logic:** the lc starts at `0x2000`. `.byte 21, 31` uses 2 bytes (lc -> `0x2002`). `.word 0abcdh` uses 2 bytes (lc -> `0x2004`).
-   based on the correct ans, `.bss` doesn't affect the `.data` lc. so, loc1 is assigned the current addr, `0x2004`.

### **qn 6: what is the word stored at the memory location 0x2002?**

-   **ans:** `0abcdh`
-   **direct code interpretation:** after placing 2 bytes at `0x2000`/`0x2001`, the lc is at `0x2002`. the `.word 0abcdh` directive places its value starting at this addr.

### **qn 7: what is the contents of r10 after the execution of the instruction "mov.w &0x2001, r10"?**

-   **ans:** `1f15h`
-   **msp430 cpu alignment rule:** the msp430 hardware requires word (`.w`) mem accesses on even addr. when it gets an odd addr like `0x2001`, it ignores the lsb, effectively accessing `0x2000`.
-   **little-endian architecture:** the cpu reads the two bytes from `0x2000`. the byte at low addr (`0x2000`) is `15h` (lsb), and the byte at high addr (`0x2001`) is `1fh` (msb). this forms the word `1f15h`.
