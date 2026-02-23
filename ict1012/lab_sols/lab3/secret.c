#include "kernel/types.h"
#include "kernel/fcntl.h"
#include "user/user.h"
#include "kernel/riscv.h"

#define DATASIZE (8 * PGSIZE)

char data[DATASIZE];

int main(int argc, char *argv[]) {
  if(argc != 2) {
    printf("Usage: secret the-secret\n");
    exit(1);
  }

  // in sniffer.c, we search for this anchor string
  strcpy(data, "This may help.");
  // then offset by 16 bytes to find the secret
  strcpy(data + 16, argv[1]);
  exit(0);
}

