#include "kernel/types.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
  if (argc < 2) {
    fprintf(2, "Usage: handshake <byte>\n"); // fd 2 is stderr
    exit(1);
  }

  // fd pairs for the 2 pipes
  // some food for thought: can we create the pipes after calling fork()?
  int parent_to_child[2];
  int child_to_parent[2];
  pipe(parent_to_child);
  pipe(child_to_parent);

  int fork_pid = fork();
  if (fork_pid < 0) {
    fprintf(2, "Failed to fork");
    exit(1);
  }

  char byte[1];
  if (fork_pid == 0) {
    // Not strictly necessary but good practice to close unused fds
    close(parent_to_child[1]);
    close(child_to_parent[0]);
  
    // the pid from fork() is 0 for the child
    read(parent_to_child[0], byte, 1); // recall that the first fd is for reading
    printf("%d: received %c from parent\n", getpid(), byte[0]);
    write(child_to_parent[1], byte, 1); // and the second fd is for writing
  } else {
    // Not strictly necessary but good practice to close unused fds
    close(parent_to_child[0]);
    close(child_to_parent[1]);
      
    // the pid from fork() is the child's pid for the parent
    write(parent_to_child[1], argv[1], 1);
    read(child_to_parent[0], byte, 1);
    printf("%d: received %c from child\n", getpid(), byte[0]);
  }

  exit(0);
}
