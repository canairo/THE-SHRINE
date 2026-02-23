#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  if (argc < 3) {
    printf("Usage: monitor <mask> cmd\n");
    exit(1);
  }

  // not gonna explain this again nyao
  int pid = fork();
  if (pid < 0) {
    printf("Fork failed\n");
    exit(1);
  }

  if (pid == 0) {
    // pid is 0, child process
    // set up monitor
    int monitor_mask = atoi(argv[1]);
    monitor(monitor_mask);
    // execute the command
    // we use argv + 2 to skip the 'monitor' and mask arguments
    exec(argv[2], argv + 2);
    // if we ever return from exec, that means exec failed
    printf("Failed to run cmd\n");
    exit(1);
  } else {
    // pid > 0, parent process
    // all we do is wait for the child to exit
    wait(0);
    exit(0);
  }
}
