#include <stdio.h>
#include <stdlib.h>


int main(void) {
  system("cat source/TestCase* | base64 -w 0");
  return 0;
}
