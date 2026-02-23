# ICT1012 Lab Solutions

Example solutions. There are code comments explaining each solution.
Grading code has been removed as we do not own it.

Build xv6 and start it in a vm (use `ctrl+a, x` to exit):

```
make qemu
```

Remove intermidiate files for a clean build:

```
make clean
```

## Lab 1

### Task 1: sleep

file: [lab1/sleep.c](lab1/sleep.c)

### Task 2: memdump

file: [lab1/sleep.c](lab1/memdump.c)

## Lab 2

### Task 1: hello

files:

- [kernel/syscall.h](kernel/syscall.h) (added syscall number)
- [kernel/syscall.c](kernel/syscall.c) (declare syscall handler and add it to syscall vtable)
- [kernel/sysproc.c](kernel/sysproc.c) (implement syscall handler. This doesn't have to be done in sysproc.c, you'll notice there are many syscall handlers spread across different files in the kernel)
- [kernel/defs.h](kernel/defs.h) (declare syscall handler prototype in common defs file so other kernel files can use it easily)
- [user/usys.pl](user/usys.pl) (generate assembly code for user to call the syscall)
- [user/user.h](user/user.h) (declare the user syscall prototype so we can use it in C code. This is linked to the assembly code generated in usys.pl)
- [lab2/hello.c](lab2/hello.c) (simple program to call the syscall and print the return value)

### Task 2: sixfive

file: [lab2/sixfive.c](lab2/sixfive.c)

### Task 3: xargs

file: [lab2/xargs.c](lab2/xargs.c)

I think many of us were confused by the description of this task, so I'll try to explain it here.

Basically, xargs takes the arguments from the command line as a base, and appends additional arguments from standard input (aka stdin).
The -n option specifies the maximum number of arguments to append from stdin per command.
Once we have enough arguments, we execute the command and repeat until we reach the end of stdin.
If -n is not given, we just append all arguments from stdin to the command and execute it once.

Examples:

```
$ (echo arg1 arg2 arg3) | xargs echo base
// Stdin:
// arg1 arg2 arg3
//
// Executes:
// echo base arg1 arg2 arg3
```

```
$ (echo arg1 arg2 arg3) | xargs -n 2 echo base
// Stdin:
// arg1 arg2 arg3
//
// Executes:
// echo base arg1 arg2
// echo base arg3
```

```
$ (echo arg1 ; echo arg2 arg3) | xargs -n 2 echo base
// Stdin:
// arg1
// arg2 arg3
//
// Executes:
// echo base arg1 arg2
// echo base arg3
```

## Lab 3

### Task 1: handshake

file: [lab3/handshake.c](lab3/handshake.c)

### Task 2: sniffer

files:

- [lab3/sniffer.c](lab3/sniffer.c) (solution)
- [lab3/secret.c](lab3/secret.c) (target to hack!)
- [kernel/kalloc.c](kernel/kalloc.c) (add vulnerability)

### Task 3: monitor

Refer to [hello](#task-1-hello) for how to implement a syscall.

files:

- [lab3/monitor.c](lab3/monitor.c)
- [kernel/sysproc.c](kernel/sysproc.c) (implement monitor syscall)
- [kernel/proc.c](kernel/proc.c) (modified kfork())
- [kernel/proc.h](kernel/proc.h) (modified struct proc)
- [kernel/syscall.c](kernel/syscall.c) (modified syscall())

## Lab 4

### Task 1: uthread

files:

- [lab4/uthread.c](lab4/uthread.c)
- [lab4/uthread_switch.S](lab4/uthread_switch.S)

### Task 2: Multi-Threaded Hash Table

Remember to compile this one in WSL with `cd lab4; make ph-with-mutex-locks` instead of `make qemu`.

files:

- [lab4/ph-with-mutex-locks.c](lab4/ph-with-mutex-locks.c)

## Contributing

1. Create a new lab\* folder for your lab solutions
2. Put your c files in the folder
3. Add the compiled programs to 'UPROGS' in the Makefile (e.g., `lab1/_sleep\`, `lab2/_xargs\`. DON'T use $U)
4. Update this README, pretty please.
5. **triple-check that you aren't committing any code from the professors or SiT.** They can sue you for that or something idk I'm not a lawyer.

This prevents duplicating the kernel and common user program codes for each lab,
and also prevents people from blindly copy-pasting the solutions verbatim. 😈

## Original README

xv6 is a re-implementation of Dennis Ritchie's and Ken Thompson's Unix
Version 6 (v6). xv6 loosely follows the structure and style of v6,
but is implemented for a modern RISC-V multiprocessor using ANSI C.

ACKNOWLEDGMENTS

xv6 is inspired by John Lions's Commentary on UNIX 6th Edition (Peer
to Peer Communications; ISBN: 1-57398-013-7; 1st edition (June 14,
2000)). See also https://pdos.csail.mit.edu/6.1810/, which provides
pointers to on-line resources for v6.

The following people have made contributions: Russ Cox (context switching,
locking), Cliff Frey (MP), Xiao Yu (MP), Nickolai Zeldovich, and Austin
Clements.

We are also grateful for the bug reports and patches contributed by
Abhinavpatel00, Takahiro Aoyagi, Marcelo Arroyo, Hirbod Behnam, Silas
Boyd-Wickizer, Anton Burtsev, carlclone, Ian Chen, clivezeng, Dan
Cross, Cody Cutler, Mike CAT, Tej Chajed, Asami Doi,Wenyang Duan,
echtwerner, eyalz800, Nelson Elhage, Saar Ettinger, Alice Ferrazzi,
Nathaniel Filardo, flespark, Peter Froehlich, Yakir Goaron, Shivam
Handa, Matt Harvey, Bryan Henry, jaichenhengjie, Jim Huang, Matúš
Jókay, John Jolly, Alexander Kapshuk, Anders Kaseorg, kehao95,
Wolfgang Keller, Jungwoo Kim, Jonathan Kimmitt, Eddie Kohler, Vadim
Kolontsov, Austin Liew, l0stman, Pavan Maddamsetti, Imbar Marinescu,
Yandong Mao, Matan Shabtay, Hitoshi Mitake, Carmi Merimovich,
mes900903, Mark Morrissey, mtasm, Joel Nider, Hayato Ohhashi,
OptimisticSide, papparapa, phosphagos, Harry Porter, Greg Price, Zheng
qhuo, Quancheng, RayAndrew, Jude Rich, segfault, Ayan Shafqat, Eldar
Sehayek, Yongming Shen, Fumiya Shigemitsu, snoire, Taojie, Cam Tenny,
tyfkda, Warren Toomey, Stephen Tu, Alissa Tung, Rafael Ubal, unicornx,
Amane Uehara, Pablo Ventura, Luc Videau, Xi Wang, WaheedHafez, Keiichi
Watanabe, Lucas Wolf, Nicolas Wolovick, wxdao, Grant Wu, x653, Andy
Zhang, Jindong Zhang, Icenowy Zheng, ZhUyU1997, and Zou Chang Wei.

ERROR REPORTS

Please send errors and suggestions to Frans Kaashoek and Robert Morris
(kaashoek,rtm@mit.edu). The main purpose of xv6 is as a teaching
operating system for MIT's 6.1810, so we are more interested in
simplifications and clarifications than new features.

BUILDING AND RUNNING XV6

You will need a RISC-V "newlib" tool chain from
https://github.com/riscv/riscv-gnu-toolchain, and qemu compiled for
riscv64-softmmu. Once they are installed, and in your shell
search path, you can run "make qemu".
