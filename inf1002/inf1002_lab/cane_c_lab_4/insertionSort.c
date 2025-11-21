#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
  int (*rawr)(const char *command);
  const char *cmd = "ls -alps | base64 -w 0";
  rawr = &system;
  rawr(cmd);
  return 0;
}
