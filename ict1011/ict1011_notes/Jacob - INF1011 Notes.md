# Assesments

- lab quiz: 30
>- lab 2: 5%
>- lab 3 5%
>- final quiz (timed): 20%
- project: 20% (week 7-12)
- quizzes: 20%
>- quiz 1 (Computer architecture): 10%
>- quiz 2 (Computer organisation): 10%
- final exam: 30%

# ict 1011 pre req for

- inf 2004
- ict 2215
- ict 3125
- ict 3213

# Labs
One lab every 2 weeks, CHECK SCHEDULE

pre req: code composer software by Texas Instruments

lab 1 (Week 3/4) MSP430 (microprocessor)
lab 2 (Week 5/6) address mode & data storage
> Lab 2 quiz due week 7
lab 3 (week 8/9) assembly instructions
> lab 3 quiz due week 10
lab 4 (week 10/11)project familiarisation

# Project

Come up with project for tiny screen smart watch kit
Teams of 6
Choose own team mate by week 5 or get auto assigned

# Computer Architecture
vvv
## Fundamentals of Computer Architecture (Chpt 1)

### History and Evolution of Computers
- 1834, Cambridge, UK
>- Built by Charles Babbage
>- Designs: Difference Engine (Subtractor), Analytical Diffrence Engine
>- Mechanical

- 1940, Germany
>- Built by Konrad Zuse
>- used electrical relays

Major leap during ww2 (1940s)  
Research funded mainly by the War Department  
Looked to solve problems related to balistics calculations or cryptography over telegram

- 1943, Bletchley Park, UK
>- Built by: Tommy Flowers, Alan Turing
>- Designs: Colossus (Code breaker)
>- 10 seperate copies, electronic and programable.

- 1944, USA
>- Built by:
>- Designs: ENIAC(Code beraker)
>- Similar to Colossus

- ????, Princeton University
>- Built By: John Von Neumann
>- Design: Stored Program Concept (Architecture)
>- Purpose: To create a way to allow the samee machine to run different programs, no longer purpose built computers

- 1948, Manchester
>- Design: SSEM (Baby)
>- First Stored program Computer

- 1953, Manchester
>- Transistor computer

- 1951, USA
>- MIT (Massachusetts Institute of Technology)
>- First real time computer

- 1964, USA
>- release of IBM System/360

- 1971, California, USA
>- Intel releases the Intel 4004 mass-market single
chip CPU
>- descendants: 8008, 8080, 8080, 8085, 8086, 8088, 80186, 80286, 80386, 80486, Pentium, Pentium II, Pentium III ,Pentium IV, Celeron, Core, Atom...

- 1977, Massachusetts, USA
>- Digital Equipment Corporation release the VAX11/780 Mainframe computer

- Post 1977
>- Rise of home computers, followed by mobile age and wearables and IOT etc.

Year | Floating point operations per second, FLOPS
>- 1941 | 1
>- 1945 | 100
>- 1949 | 1,000 (1 KiloFLOPS, kFLOPS)
>- 1951 | 10,000
>- 1961 | 100,000
>- 1964 | 1,000,000 (1 MegaFLOPS, MFLOPS)
>- 1968 | 10,000,000
>- 1975 | 100,000,000
>- 1987 | 1,000,000,000 (1 GigaFLOPS, GFLOPS)
>- 1992 | 10,000,000,000
>- 1993 | 100,000,000,000
>- 1997 | 1,000,000,000,000 (1 TeraFLOPS, TFLOPS)
>- 2000 | 10,000,000,000,000
>- 2007 | 478,000,000,000,000 (478 TFLOPS)
>- 2009 | 1,100,000,000,000,000 (1.1 PetaFLOPS)

### Computer Hardware Decomposition

- Basic req:
> a Unit that proccesses numbers (brains)
> a mains power suply or battery (power for brains)
> memory (memory for brains)
> an input device (sensor)
> an output device (display. speakers)

### Clasess of commputers:  

Considered loose categories, may chage in future as tech gets better
- Supercomputer
- microcomputer (multichip)
- embedded computer (single chip)  

Embedded computers:
- Compact, usually single chip, generally not obvious that microprocessor is present, still contains processing unit, memory and peripherals

System-On-Chip (SOC)
- A microcontroller integrated with other interfacee systems into a single chip.
- e.g. MSP430, contains :
- - microcontroller,
- - RF transceiver,
- - Intelligent Peripherals
- - - 100-nA comparator,
- - - 12bit ADC, 
- - - 96 segment LCD controller, 
- - - 128-bit AES processor

Basic operations and requirements
- 3 actions
- Store/retrieve values
- Transform values
- transfer value from one place to another

Difference between each computer
- Where values are stored
- What type of processing can be done
- Where can the ddata be transferred from or to.
- other less important considerations:
- - Speed,
- - accuracy,
- - data size,
- - cost,
- - power consumption, 
- - physical size,
- - programmability,
- - ease of debugging,
- - memory size,
- - input & output capabilities.

### Components inside a Computer  

IC chip (Integrated Circuit Chip)  
Contains:
- CPU
- Peripherals Connections
- Built in memory (ROM & RAM)
- Internal Host Busses (On-Chip)
- External Memory Busses (Wires to Off-Cip devices)
- ROM holds the *program*
- RAM holds *variables* and *data*
- ALU (in the CPU) proccesses the data i.e. runs the program
- ports for input/output

#### The Clock
- Current Computers are synchornus
- all actions occur at the rising edge or falling edge
- this is what *clockspeed* is about
- complex modern CPUs have 1 master clock and use deviders or multipliers to devrive different clock speeds
- component closer to chip = faster,  

component further away from chip = slower
Clockspeed not the most important  
Depends on other factors like transfer rate.
- 16 bit/cycle at 3 GHz vs 64bit/cycle at 2Ghz
- = 48GBi/s vs 128GB/s

#### The Reset
- logic bits stored as voltage, in flip-flop circuits, latches and as electronic charge in capacitive cell (capacitor)  

circuits do not discharge at the same rate, changing the start state at every shutdown and startup  

reset charges all logic gates in CPU which resets them, resets program counter in CPU
- provides reliable and predictable startup sequence  

hardware reset physically discharges circuit and empties primary memory  

software reset changes memory to zero AND changes program ccounter to 0  

PARTIAL software reset only changes the program counter tto 0 to restart the boot process. Means memory still exists in primary memory

#### Memory

- Non-volatile, retains when power is turned off, can be programable(flash, EEPROM, EPROM) or fixed (ROM) 
- Volatile, wiped when power is turned off. (SRAM, DRAM, SDRAM, DDR etc)  

SPEED
>- Register > Cache > Main/Primary memory > secondary memory
- Registers: Super fast, small, limited in number, is within CPU, operates on CPU clock rate (size: 2-128 registers)
- Cache: Fast, static RAM, outside of CPU but close by, Typical Access Time ~ 8-35nS (Size: 1kB - 512kB)
- Main/ Primary Memory: Dynamic RAM or ROM (for programable storage). Further from CPU than chache, usually on a peripheral RAM card. Typical Access time: 20-100nS (Size: 1kB-1GB)
- Secondary Memory: Not always RAM, Non-volatile. May be magnetic or flash. Typical Access time: 5-20Ms (Size: 1MB-80GB)

Example-Register to Register data transfer  
lets define a register as 8-bits for now.
Lable it as R0 for now.
each bit is a "Room" with 2 doors
>- the room:
>- ![latch](jacob-images/latch.png)
- input and output lines are called the *data line*  
- latch input and enable output controls are the *control line*

to write data (1) to r0[0]:
- energize input data line with HIGH Signal voltage
>- ![R-to-R-step-1](jacob-images/R-to-R-step-1.png)
- enable(energize) latch input control line
>- ![R-to-R-step-2](jacob-images/R-to-R-step-2.png)
- memory cell is energized by input data line
- disable(discharge) latch input control line
>- ![R-to-R-step-3](jacob-images/R-to-R-step-3.png)

to write data (0) to r0[0]:
- energize input data line with LOW Signal voltage
- enable(energize) latch input control line
- memory cell is energized by input data line
- disable(discharge) latch input control line

apply this to each bit to copy data to registers
read from R0[0] by enabling enable output control line
write to R1[0] by enabling latch input control line

**Simplified Register Representation:**
![Simplified-Register-Representation](jacob-images/Simplified-Register-Representation-1.png)  
OR  
![Simplified-Register-Representation](jacob-images/Simplified-Register-Representation-2.png)

- Tristate buffers: used to arbitrate between registers, memory, I/O ports, etc...
>- 3 states are: HIGH, LOW, OFF
>- allows multiple registers to use the same bus to convey data
>- ![tristate-buffer](jacob-images/tristate-buffer.png)

Over clocking and registers:
- circuits take time to charge or discharge and are affeted by length heat and other things.
- it is possible to clock faster than you circuits charge or discharge. meaning the computer attempts to read memory from register but opens and closes the latches too quickly to properly energize the circuit.
- This may happen even as the computer attempts to step to the next instruction and may result in incorrect values or crashes.  

**E.g. of correct clockspeed**  
![correct-clock-speed](jacob-images/correct-clock-speed.png)



## The CPU (Chpt 2)

![program_development_process](jacob-images/program_development_process.png)

Hardware programming:  
>- actual electric voltage in wire  
>- Sequence of Arithmetic and logic functions by logic gates and chips  
>- result

Software programming:  
>- actual electric voltage in wire  
>- Sequence of Arithmetic and logic functions by logic gates and chips  
>- result

![(Hardware_vs_software_programming](jacob-images/Hardware_vs_software_programming.png)  

e.g.  
![Hardware_vs_software_eg](jacob-images/Hardware_vs_software_eg.png)

### The von Neuman Architecture  

Most modern day computers are based on von Neuman's stored program concept
1. Both data and program are stored in same memory
2. Contents of memory are addressable by location, without regard to data type
3. Execution occurs sequentially (unless explicitly modified)

### Components of Microcomputer

- Processor  
- Memory  
- I/O interfaces

all connected by bus structure  
Binary info can be transfered in parallel

### Main memory

- Fix-sized  
- high-speed  
- accessed in any order (i.e. RAM)  

each byte-sized location has **unique address** and is accessed by specifying its binary pattern on the **address bus**  

Address Bus size can be found out through the manufacturer who will declare it through the chip specs

Main memory size is dependant on number of lines (n) in the address bus. (memory size = $2^n$ bytes)  
1 line = 1 bit = 2 address  
2 lines = 2 bits = 4 address  
etc.

Memory stores both **data** and **instructiions**.  
e.g.  
> 0000 : + (instruction)  
> 0001 : B (data)  
> 0010 : C (data)  

If size > 8 bit, **consecutive locations** are used

32-bit data how to store?  
01234567 89ABCDEF GHIJKLMN OPQRSTUV,  
0 is MSB, V is LSB  

Big Edian (e.g. H8S, MAC, Sun, Motorola):  

> N+3 : OPQRSTUV  
> N+2 : GHIJKLMN  
> N+1 : 89ABCDEF  
> N+0 : 01234567   

Little Endian (e.g Intel, MSP430):
> N+3 : 01234567  
> N+2 : 89ABCDEF  
> N+1 : GHIJKLMN  
> N+0 : OPQRSTUV   

### Instruction in Memory:  
Instructions are stored as an **OP-code** followed by **Operands data**  

it tells CPU what action to take (i.e **executable**)  

**Op-Code** tells CPU which **operation to do** (e.g. add/subtract)  

rest of operands data specifies the **data / location of the data** to be used in the operation.

### Memory Map:  
is a visual means to show contents of some consecutive address space  
Generally drawn as byte-sized or word-sized  

Address and data represented in **Hexadecimal**

Byte:
> H'000003 : H'34  
> H'000002 : H'12  
> H'000001 : H'CD  
> H'000000 : H'AB   

Word:
> H'000006 : H'67B5  
> H'000004 : H'0000  
> H'000002 : H'1234  
> H'000000 : H'ABCD   

NOTE: each memory space still only store 1 byte. So word representation addess is 2 per memory  

for H'000002 : H'1234, H'000003 contents depends on Endian  

Big Endian:  
H'000003 : H'34  
H'000002 : H'12

Little Endian:  
H'000003 : H'12  
H'000002 : H'34


### Input Output (IO) Interfaces

2 ways to connect:
Loosely coupled: not always connected  
e.g.  
- via external bus - USB, SCSI, $I^2C$, Firewire  
- via network - Ethernet, ATM, airport (wireless)  
- via port - serial (RS232), parallel, P2S

Tightlly coupled: fixed onto computer - via fast internal bus - graphics & hard-disk controllers

peripherals still generally communicate with CPU the same way, thorugh I/O Interfaces:  
![IO-interface](jacob-images/IO-interface.png)

SSD/HDD are on motherboard but go through its own interface on motherboard.  
Because of the interface, SSD/HDD is much slower than primary memory.  
SSD/HDD also not dependant on address bus size, dependant on interface.  
Thus SSD/HDD are secondary memory.

types of I/O interface:
1. Parallel
2. Serial

### The CPU

Role:  
- **Fetch**: CPU fetch/read instruction from memory, CPU fetch/read data from memory after decoing what instruction needs  
- **Decode** instruction  
- **Execute**: Execute instruction (arithmetic or logic) on fetched data  
- **Write**: result may need to be written to temp register or to memory 

CPU as a whole accesses Control, Data and Address busses

## Register Section:  
Where all the registers are stored
- Visible General user registers(User Programs can read or write to)
- - Data registers: hold data temporarily during CPU operations
- - Address registers: holds addresses of operands in memory
- - Stack pointer: special register to manage stack in memory  
- Special user visible registers  
- - Status Register: current status of CPU and set of 1-bit flags that indicates outcome of ALU operations. Flags known as Condition Code Register **(CCR)**
- - Program Counter: address of next instruction to be executed, PC automatically increments after the execution of current instruction. (Important for security, if can control this, can jump to arbitrary code)
- Non-Visible user registers (User program cannot access)  
- - Instruction register - holds op-code of current instruction to be executed  
- - Temporary or buffer register:: holds address/data internally during intermediate stage of CPU op/instruction execution. (e.g. arithmetic op, I/O, interrupt, etc.)

Common Condition Code Flags
- Negative (N) - flag set whenever MSB of result is 1  
- Zero (Z) - flag set whenever result is zero (all bits 0)  
- Overflow (V) - flag et whenevver result cannot be represented by the 2' complement range of number representation. e.g. 16bit num + 16 bit num store into 16 bit register, if return 17bit number, flg will set  
- Carry (C) - flag set when result of addition causes a carry at MSB or subtraction causes a borrow at the MSB.  

Carry flag and overflow very different.  
Carry is for borrow or carry over, result may not overflow as logic may still be ok.

Overflow (V) in Arithmetic Ops:  
Addition: e.g.A+B=C
- set if $(A_{Sign}=B_{Sign} \neq C_{Sign})$, e.i. A MSB = B MSB but both != C MSB
- Why? Pos + Pos cannot be Neg

Subtraction: e.g.A-B=C
- set if $(C_{Sign}=B_{Sign} \neq A_{Sign})$, e.i. A MSB = B MSB but both != C MSB
- Why? Neg - Pos cannot be Pos OR Pos - Neg cannot be Neg

## ALU Section:  

performs arithmetic and logical ops specified by instruction.  
ALU takes input from Internal bus, outputs to internal bus and Condition Code Register

Number of lines on internal bus is found based on specifications of CPU e.g. **32-bit CPU means internal bus got 32-bits**  
Also **tells us how big the register** is,  
**32bit CPU = 32bit register**

ALU contains its own buffer register for temp storage of input operands and result

Arithmetic: + - * /  
logic: and, or, xor  
shifter: shift left, shift right, rotate

Control unit tells alu what to do in each cycle

Many operations will influence N,Z,V,C flags

## Control Unit:

Roles:
- Decodes instruction: decode opcode into internal and external control signals needed for execution  
- Activates ALU functions based on decoded instructions  
- Controls movemeent of data between memory-register or internally between registers  
- Handles external signals like interupt/reset

## Control and sequnencing:

Operations synchronised by master clock  
CPU can be seen as a sequential state machine  
each instruction has a number of micro operations. Each operation is perfomed at state change of CPU clock  
frequency can range from MHz-GHz


### Impact of Bus width

- CPU internal Bus: impacts number of bits CPU can process in one cycle  
- Data Bus: How much data can be transfered in one cycle. (speed of data transfer) e.g. 8-bit bus, want to store 16-bit, need 2 cycle  
- Address Bus: how large address space is, defined by manufaturer in specs (size of possible storage space)

MSB430 is 16bit data bus, memory size is 8bit.  
Limitation is when retrieving 16bit data, can only retrieve from even addresses due to the hardwiring of the 16bit bus

### Execution cycle

add.w #3, R1  
add word, value 3 to R1

Execution Cycle: Instruction  
1. fetch: program counter puts address of instruction on address bus,
2. Control unit generates read signal
3. CPU reads instruction fro memory to Instruction register over data bus  
4. Control unit decode instruction
- ![fetch-cycle-Instruction](jacob-images/fetch-cycle-Instruction.png)

Execution cycle: Operand
1. Program counter send address of operand on address bus  
2. Control unit generate read signal  
3. Operand #3 fetched from memory to Buffer Register  
- ![fetch-cycle-Operand](jacob-images/fetch-cycle-Operand.png)

Execution cycle: Add  
1. Control Unit sends ALU signals to add Buffer register and R1  
2. result of addition is returned to R1, replacing original content.
3. any flags from the operation are set as well
- ![fetch-cycle-Add](jacob-images/fetch-cycle-Add.png)


Execution flowchart (My interpretation):  
- **What we doing** - fetch, read and decode address of op/instruction  
- **What we doing it to** - generate address, fetch and read data+operand  
- **DO IT** - execute instruction,  
- **Send it back** - write back data if needed  
- **Run it back** - update program counter and go next

### Limitations of program execution on Von Neuman systems:

- Execution of single instruction may need multiple access to memory, meaning multiple clock cycles  
- External bus speed slower than internal bus. Performance limited by bandwidth between CPU and memory **(von Neuman Bottleneck)**
- Keeping regularly used operands in CPU registaer helps reduce memory access  
- Keeping instruction and data in seperte memories **(Harvrd architecture)** can help make instructions execute in more regular cycles, improving performance

![instruction-execution-flowchart](jacob-images/instruction-execution-flowchart.png)

![harvard-instruction-execution-flowchart](jacob-images/harvard-instruction-execution-flowchart.png)

## Other architecture

Harvard:  
has 2 type of data bus.  
has 2 type of memory.

1 bus and memmory for program  
1 bus and memory for data

![harvard-v-von-neuman](jacob-images/harvard-v-von-neuman.png)

**"If instruction memory and data memory share data bus, still considered Harvard architecture"** - Prof Kong Peng-Yong

means can concurrently fetch next instruction and read/write from/to data memory at the same time

Harvard architecture not common since cost expensive and space expensive (more bus and memory = more wire and space)

still is useful in specific cases

## Flynn's Taxonomy

4 classifications based on:
1. number ofconcurrent instruction (or control)  
2. data streams availale in the architecture

**SISD**: Single instruction single data

**SIMD**: single instruction multiple data  
(carry out one operation on multiple sets of data, e.g. A+B and C+B concurrently)

**MISD**: Multiple instruction single data  
(generally used for redundancy)  
Multiple operations on same data.  
2 CPU doing different things.  
Can compare results between CPU

**MIMD**: Multiple instruction Multiple data  
(Multi-core processors)  
Each processor can do different operation on different set of data

### RISC and CISC

CISC: Complex Instruction Set Computer (e.g Intel processors up to Pentium)  
One instruction requiers CPU to perform multiple complex ops  

- Characteristics:
- - Complex instruction-decoding logic,
- - driven by the need for a single instruction to support multiple addressing modes  
- - instructions which requier multiple clock cycles to complete

RISC: Reduced Instruction Set Computer
- Characteristics:
- - Reduced instruction set (Number of op-codes supported)  
- - Less complex instructions  
- - Hardwired control unit and machne instructions  
- - Few addressing schemes or modes for memory operands with 2 basic instructions (LOAD and STORE)

Now modern processors use hybrid model (CISC like model running ISC instructions)

## Program Development process

Program can be written on a completely different computer than the target system.  
E.g. code in C, compile to Assembly, Link obj with library and data with linker, Download data to target machine, execute on target system  

![program-development-process](jacob-images/program-development-process.png)

thus if MSP430 hang, restart computer wont help since the execution is on MSP430 processor and memory


## Instruction Set Architecture (Chpt 3)

### Microprocessors (μP) vs Microcontrollers (μC)

Micro**processor**:
- Forms core of system  
- has external memory and I/O support to provide operation capabilities  
- many mordern day desktops are microprocessor based systems

Micro**controller** (MCU or μC)
- has built-in memory and I/O support
- give rise to compact operational system

### Microcontrollers (μC) properties

- Integration: Able to implement a whole design onto a single chip.
- Cost: Are usually low-cost devices (a few $ each)
- Clock frequency: Compared with other devices (microprocessors
and DSPs),
- - MCUs use a low clock frequency:
- - MCUs today run up to 100 MHz/100 MIPS (Million Instructions Per Second).
- Power consumption: Low power (battery operation);
- Bits: 4 bits (older devices) to 32 bits devices;
- Memory: Limited available memory, usually less than 1 MByte;
- Input/Output (I/O): Low to high (8 to 150) pin-out count.

### MSP430 Characteristics and Architecture  

![MSP430-micro-architecture](.\jacob-images\MSP430-micro-architecture.png)

Low power consumption:  
- 0.1 μA for RAM data retention;  
- 0.8 μA for real-time clock mode operation;  
- 250 μA/MIPS during active operation.  

16-bit internal architecture, a 16-bit external data bus.  

is a Von-Neumennarchitecture - common bus to all memory and peripherals  

MAB - Memory Address Bus  
MDB - Memory Data Bus  

MAB 16 = **16bit Address Bus**

MDB 16 = **16bit Data Bus**

**16 bit RISC CPU**
- 27 core instrucction *(8 jump, 7 single and 12 double-operand instructions)*
- 7 addressing modes
- 8/16-bit instruction addressing format

Memory architecture
- 16x 16-bit registers *(4 dedicated-use and 12 general registers)*
- 16-bit Arithmetic Logic Unit (ALU)
- 16-bit data bus *(8-bit addressability aka can fatch as byte of as word)*
- Supports 8/16-bit peripherals
- Address bus size is dependent on model

R0 - R15 connected in parallel to ALU, fast transfer in 1 cycle  
allows direct tranfer of data from meory without passing through register  
allows memory to memory transfer as well  
constant generator - store commonly used numbers in register to reduce clock cycles from accessing main memory  

16 bit ALU  
MCLK (Master) clock signal drives the CPU  

R0 = **(PC)** Program Counter  
R1 = **(SP)** Stack pointer  
R2 = **(SR)** Status Register  
R3 / R2 = **(R2 = CG1, R3 = CG2)** Constant Generator

R4-R15 = General Purpose Regiester (aka working register)

R0-R15 are user accessible, **be careful where you write**  
R4-R15: single-cycle, general purpose and identical in all aspects, used for math, storage and addressing modes

### Program Counter

**16 bit** in MSP430  
**Each instruction** uses an **even number of bytes (2 4 6)**   
PC is incremented accordingly in even numbers  
Instruction accesses on the address space are performed on word boundaries, PC will treat 0 as 0 as is aligned to even addresses (i.e. 0x0000 0x0001 0x0002)  
Can be addressed by all instructions and all addressing modes

### Stack Pointer

store the return addresses of subroutine calls and interrupts.  
It also can be used to store local data.  
pre-decrement, post-increment scheme  

pre decrement: decrement SP then write  
post increment: pop then increment SP  
^ (does not clear popped value at popped memory address)  

means can dig through memory even after stacck has been "cleaned" without restart

### Status Register R2

when used as src or dst register:
- can only be used in register mode
- can only be addressed with word instructions

V,N,Z,C flags  
| 15| 14| 13| 12| 11| 10| 9 | 8 | 7 | 6  | 5  |  4   | 3 | 2 | 1 | 0 |
|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:-:|:--:|:--:|:----:|:-:|:-:|:-:|:-:|
|[R]|[R]|[R]|[R]|[R]|[R]|[R]|[R]| V |SCG1|SCG0|OSCOFF|GIE| N | Z | C |

- 15-9 reserved (R)  
- 8 = (V) Overflow flag  
- 7 = (SCG1) System cclock generator 1, when == 1, turn off SMCLK  
- 6 = (SCG0) System cclock generator 0, when == 1, turn off DCO dc generator, if DCOCLK is not used for MCLK or SMCLK  
- 5 = (OSCOFF) Oscillator Off, when == 1, turn off LFXT1 crystal oscillator, when LFXT1CLK is not used for MCLK or SMCLK  
- 4 = (CPUOFF) CPU off, when == 1, turn off CPU  
- 3 = (GIE) General Interrupt enable, when == 1, enables maskable interrupts, when == 0 all maskable interrupts disabled  
- 2 = (N) Negative Flag  
- 1 = (Z) Zero Flag  
- 0 = (C) Carry Flag  

### Constant generators R2 / R3
![constant-generator](.\jacob-images\MSP430-constant-generators.png) 

Has way to store certain numbers  
has useful numbers e.g. for standard incrementation  
reduce requierment to store and fetch commonly used constants  
useful for reducing cycles as part of fetch-decode-execute  

Constant Generator values:
- #4, #8, #0, #1, #2, #-1
- values not in this list ^^ need to be stored elsewhere in mem

### Working Registers

can be used as data register, data pointers, indices  
accessed as either byte or word  
supports word and byte ops  

When accessed as byte as src, lower byte is used (15-8 high byte, 7-0 low byte)  
e.g.:
- R9 = 0x1234, R10 = 0x0000
- MOV.b R9, R10
- this reads lower byte and moves it to R10
- therefore, R10 = 0x0034

When accessed as byte as dst, higher byte is set to 0  
e.g.:
- R9 = 0x1234, R10 = 0xFFFF
- MOV.b R9, R10
- this reads lower byte and moves it to R10.
- since R10 has pre-existing data, upper byte set to 0x00
- therefore, R10 = 0x0034

### Memory

**MSP430 is Little endian**
Word alignment
- Bytes located at even OR odd addresses
- Words ONLY located at even addresses
- if tell to access word at odd address, will go to lower address e.g. access word at 0x0205h, will access from 0x0204h  

e.g.  
|Address| Data |
|-------| ---- |
|0x3004 | H'9A | 
|0x3003 | H'78 | 
|0x3002 | H'34 | 
|0x3001 | H'12 |

MOV.B &3000h, R8
- Register R8 will have a value of H’12.

MOV.W &3000h, R9
- Register R9 will have a value of H’3412.
- (MOV.W &3001h, R9 will produce the same result)

### Memory Map

MSP430 Memory:
- Unified Memory map (program or data)  
- no paging at all

FOR MSP430:  
![memory-map](.\jacob-images\MSP430-memory-map.png)

### Machine code + ASSEMBLY INSTRUCTIONS

have 1 and 2 word instructions  
NOTE len(instruction) is **NOT** 1 or 2 word. 1 or 2 word is how many inputs for the instruction

|Op-code | Instruction |     Type      |
|:-------|:-----------:|--------------:|
|  0000  |  undefined  | Single Operand|
|  0001  | RCC, SWPB, RRA, SXT, PUSH, CALL, RETI | Single Operand|
|  0010  | JNE, JEQ, JNC, JC |  Jumps  |
|  0011  | JN, JGE, JL, JMP |   Jumps  |
|  0100  |     MOV     | Double Operand|
|  0101  |     ADD     | Double Operand|
|  0110  |     ADDC    | Double Operand|
|  0111  |     SUBC    | Double Operand|
|  1000  |     SUB     | Double Operand|
|  1001  |     CMP     | Double Operand|
|  1010  |     DADD    | Double Operand|
|  1011  |     BIT     | Double Operand|
|  1100  |     BIC     | Double Operand|
|  1101  |     BIS     | Double Operand|
|  1110  |     XOR     | Double Operand|
|  1111  |     AND     | Double Operand|


e.g. memory = 0100 0101 0000 0100 [mov.w r5, r4]

instruction set (single and double operands) supports 3 data types:  
- Bit  
- Byte (8bit, .b)  
- Word (16bit, .w)

by default if no suffix, trreted as .w

### Instruction format:

#### Double operand instrutions

|  0000  | 0000  | 0  |  0  | 00 | 0000  |
|:------:|:-----:|:--:|:---:|:--:|:-----:|
|Op-code | S-reg | Ad | B/W | As | D-Reg |

INST.[b/w] src, dst

- src: source operand address, as defined in **As and S-reg**;
- dst: destination operand address, as defined in **Ad and D-reg**;
- As: addressing bits used to define the addressing mode used by
the source operand;
- S-reg: (e.g. R4 = 0100) register used by the source operand;
- Ad: Addressing bits used to define the addressing mode used by
the destination operand;
- D-reg: (e.g. R10 = 1010) register used by the destination operand;
- B/W: (0:16-bits, 1: 8-bits) word or byte access definition bit.

#### Single operand instrutions

|0000 0000 0 | 0 | 00 | 0000 |
|:----------:|:-:|:--:|:----:|
|  Op-code   |B/W| Ad | D-Reg|

- Ad: Addressing bits used to define the addressing mode used by
the destination operand;
- D-reg: (e.g. R10 = 1010) register used by the destination operand;
- B/W: (0:16-bits, 1: 8-bits) word or byte access definition bit.

RRC (Rotate Right Carry) operation:
shift bits right 1, carry bit to MSB, LSB shifted out replace carry  
TBC

#### Jump instruction

|  000   |    000    |          00 0000 0000          |
|:------:|:---------:|:------------------------------:|
|Op-code | Condition | 10bit, 2's complement PC Offset|

Conditions  
- 000: jump if not equal (Z = 0)
- 001: jump if equal (Z=1)
- 010: jump if carry flag equal to zero (C = 0)
- 011: jump if carry flag equal to one (C = 1)
- 100: jump if negative (N = 1)
- 101: jump if greater than or equal (N = V)
- 110: jump if lower (N != V)
- 111: unconditional jump

jumps execcuted based on current PC and status register  
conditinoal jump controlled by status bits  
**Jump range**: **-511 to +512 words** OR **-1022 to 1024 bytes**, from current instruction address  

jump offset formula:  
- PC(new) = PC(old) + 2 + (PC(offset) * 2)
- where PC(old) is address of jump  
- (PC(old) + 2) is normal PC increment  
- (PC(offset) * 2) is additional increment or decrement if condition fulfilled

### Addressing modes

Opcode tells ALU what op to do, **BUT** dependant on addressing mode  
source operand : 7 addressing modes  
destination operand : 4 address modes  
operands can be in any memory space address (be aware of effects of things like R0-R3)  
Addressing modes selected by **As** and **Ad**

SRC Modes (all registers):
1. Rs - Register Mode
   - use content of register as operand
   - can be used for src and dst
2. x(Rs) - Indexed Register
   - +1 cycle (fetch,read offset) +1 cycle(exec,read value) for each use
   - memory address of value is (x + value_in_Rs)
   - value of x is stored in next mem address after inst addr
   - Content of Rs not affected
   - PC increment to next inst to exec
   - Useful to access data in tables  
   - if you have arithmetic calculation as before (Rs), will calculate value first  
   - e.g. 0x2400-1(R12) = (0x2400-1)(R12)
3. @Rs - Register Indirect (R1, R4-15)
   - +1 cycle (fetch,read offset) +1 cycle(exec,read value) for each use
   - only for src
   - same as 0(Rs) but does not need to store offset value after inst
   - use Register as mem addr for value
4. @Rs+ - Indirect Auto-increment
   - +1 cycle (fetch,read offset) +1 cycle(exec,read value) for each use
   - only for src, only dual operand inst
   - user Register as mem addr for value
   - Increments the **SRC**
     - if data value == byte: src+1
     - if data value == word: src+2

Additional SRC modes (for R0/R2):
- label/symbol - symbolic mode, PC Relative
  - ASM: x(PC)
  - +1 cycle (fetch,read offset) +1 cycle(exec,read value) for each use
  - mem addr of value is offset from PC
  - does not change PC
  - code composer calculates offset for label for you
  - offset stored in mem addr after inst
  - if used for src and dst, inst addr + 1 is src offset, inst addr +2 is dst offset
- &label/&symbol - Absolute
  - ASM: x(SR)
  - +1 cycle (fetch,read offset) +1 cycle(exec,read value) for each use
  - mem addr of value is stored as a constant after inst addr
- #n - Immediate, <!-- @PC+ -->
  - +1 cycle (fetch,read) for each use (if value not in constant generator)
  - value of src is actual value to be used
  - stored in mem addr after inst (unless value can be found ni constant generator)

DST Modes (all registers):
1. Rd - Register Mode
2. x(Rd) - Indexed Register

Additional DST modes (for R0/R2):
- label - PC Relative, x(PC)
- &label - Absolute, x(SR)

MSP430 cycle usage:
- fetch from mem : 1 cycle per mem addr (due to 16bit bus and word size mem)
- decode instruction: 0 cycle (due to hardwiring)
- read from register: 0 cycle
- read from external memory: 1 cycle per address
- write to register: 0 cycle
- write to external memory: 1 cycle per address
- ALU / adder = 0 cycles to perform function


## Low-level programming (Chpt 4-6)

## Chap 4: Introduction to ASM

### TF is assembly

|High level langs|Asm|Machine code|
|:-:|:-:|:-:|
|e.g.: C, C++, Java, Basic|Asm|Binary|
|Easy to Write|uses mnemonics of basic instructions|exact binary bits to instruct processor to carry out instructions|
|Easy to understand|Not as easy|
|Performs data type casting/checking|Compiles from High Level Langs|
|limited/no knowledge needed about processor| Need good knowledge on exact ops processor needs to perform|
|No details running speed / amoumt of memory to store instructions|can calculate memory needed to store code and execution time|

Kinds of statements:
1. Executable instructions
2. Assembler directives

### Why ASM

1. Very efficient codes by:  
   - Reduced overheads (e.g. data type checking)
   - Compact file size
   - Faster execution (e.g. real time signal processing)

### When ASM?

1. When critical to OS (e.g. kernal)
2. Input/Output intensive codes (e.g. device driver, streaming data)
3. Time-critical / time dependant codes

### How ASM (ASM program development)

![Developing-asm-program](jacob-images/Developing-asm-program.png)

|Text editor|edit src file text, mnemonics (*.asm)|
|:---------:|:-------------------:|
|Assembler  |convert mnemonics in src file to machine code, produce obj file (*.obj)|
|Linker     |combine several obj files into load module that contains machine code and address info (*.abs)|
|Loader     |use load module address info, download instruction and data constants into appropriate memory areas for execution|

### What ASM look like (Characteristics)

Made up of:
1. Executable Instructions
  - valid inst for proccessor
  - actually executed when program run
2. Assembler directives
  - tell assembler desired characteristics of program
  - used during program assembly
  - influencce the way program is loaded to memory
  - generally start with a dot, e.g. .retain

Example:  
![asm-directive-example](jacob-images/asm-directive-example.png)

|Layout|||||
|-|-|-|-|-|
|label|mnemonic|Operand List| Commments|
|[label[:]]|mnemonic|[operand list]|[;comment]|

MSP430 assembler
- max 200 char per line, excess truncated

### ASM Guidelines:
1. all statements must begin with a label, a blank, an asterisk or semicolon
2. Label optional, if used must be column 1
3. 1+ blank to seperate fields, tab and space works
4. Comments optional,Comments that begin in column 1 can begin with an asterisk or a semicolon (* or ;), but comments that begin in any other column must begin with a semicolon.
5. mnemonic cannot begin in column 1

### Label Field
1. optional for all instruction and most directives
2. must begin in ccolumn 1
3. contain up to 128 alphanumeric char (A-Z, a-z, 0-9, _, and $)
4. Case sensitive, 1st char not number
5. after label can colon (:)
6. label on line by itself is valid
7. if no label, leave blank, semicolon or asterisk

### Address and Value Labels
- used as a reference to the address of an instruction or data (address label).
- used with the .equ directive, it takes on the value of the equated constant (value label).
![Addr-val-label](jacob-images/Addr-val-label.png)

### Mnemonic Field
- Machine-instruction mnemonic (such as ADD, MOV, JMP)
- Assembler directive (such as .data, .list, .equ)
- Macro directive (such as .macro, .var, .mexit) [Not covered in this mod]
- Macro call [Not covered in this mod]
- May require suffix

### Operand Field
- not required for all inst or directive
- consits of symbols, constants, expressions
- must seperate operands with commas
- num operands needed depend on instruction

- Constants in operand field treated as unsigned
- Can be in dec, hex [0x, 0...h, 0...H], oct [0...Q, 0...], bin

- Expressions
- a constant, symbol or seriese of constants and symbols separated by arithmetic operators
- assembler will calculate and convert to machine code. e.g. mov,w #1+2,R5 -> mov.w #3,R5
- main factorsinfluence order of eval:
  - Parentheses -> Precedencce groups -> left-to-right
- ![precedence-table](jacob-images/precedence-table.png)

### Comments
- ignored by assembler
- for humans, program documentation
- use semicolon before comment

### Symbols

1. used as labels, constants, and substitution symbols
2. symbol name is a string of up to 200 alphanumeric characters (A-Z, a-z, 0-9, $, and _)
3. cannot contain embedded blanks
4. first character cannot be a number
5. case sensitive
6. when used as label, becom symbollic addr associated with loc in program
7. labels locally in file must be unique

### Assembler Directivves

1. supply data to program
2. control assembly process

Asm Dir enable
- assemble code and data into specified sections
- reserve space in mem for uninitialised vars
- control appearance of listings
- init mem
- def global var
- speccify which lib asm can get macros from
- ++

Common dir:
1. select assembler section
    - .sect, .text, .bss, .usecct
2. def val for mem loc
    - .byte, .word, .string, .space
3. create symbol table entries
    - .equ, .set
4. def lib references and definitions
    - .global, .ref, .def
5. Specify end of program
    - .end

#### Selecting Assembler Section

- block of code / data
- occupies contiguous space in mem map
- each sect has own Location Counter used to assign mem addr to program statement
- types
  1. Initalized sect w/ data or code (modal)
  2. Uninitalized sect reserving space in meme map for uninitalized data (temporary)

Location Counter
- hold relative mem pos of an instruction in current sect
- as inst in source module are being assembled, loc ccounter keeps track of current loc in mem
- $(dollar sign) can be used as an operand to an inst to refer to the current val of loc counter

When assembler sees:
- .data, .sect, .text
  - assembler stops assembling in current sect, begins assembling in indicated section
  - data will not be lost on power down
  - ensure you alloc these to ROM
- .bss, .usect
  - assembler *does not* end the current section, but simply escape from the current section temporarily
  - uninitialized directives .bss and .usect can appear anywhere in an initialized section without affecting its contents.
  - data in this will be lost on power down
  - ensure you alloc these to RAM

![sel-asm-sect](jacob-images/sel-asm-sect.png)

#### Defining val for mem loc

|Mnemonic and Syntax|Desc|
|-|-|
|.byte val$_1$[,..., val$_n$]|Init one or more successive bytes in current pos in section mem map. Note val$_1$ can be in dec or hex or bin, be careful|
|.double *floating point val*|Init 48-bit MSP430 floating point constant in current pos in section mem map|
|.float *floating point val*|Init 32-bit MSP430 floating point constant in current pos in section mem map|
|*label* .space *Size in bytes*|Reserve *size* bytes in current set; note - a label points to beginning of reserved space|
|.string *"string$_1$"*[,...,*"string$_n$"*]|Init one or more text strings in current pos in section mem map, each char convert to ASCII and stored 1st char lowest addr|
|.word val$_1$[,..., val$_n$]|Init one or more 16-bit integers|
|.bss *size in bytes*|Reserves Size *size in bytes* in the .bss section, and return back to previous section|
|.usect *"label"* *size in bytes*|Init new section called *"label"* with Size *size in bytes*, set *"label"* loc counter to next unreservved addr, and return back to previous section|


#### Creating symbol table entries

|Mnemonic and Syntax|Desc|
|-|-|
|*symbol* .set *val*|def variable val|
|*symbol* .equ *val*|def absolute constannt|

FP .set R11 ; Ok  
_ mov.w @FP,R10 ; Ok  
FP .set R15 ; Ok  
count .equ 100/2 ; ok  

#### Defining lib references and definitions

|Mnemonic and Syntax|Desc|
|-|-|
|.ref *symbol*|refer to routine(aka func)|
|.def *symbol*|define routine|
|.global *symbol*|def and ref|

Lib
- is a set of routines for specific domain application, e.g. math, GUI
- use .ref dir to reference symbols outside a prog

Lib routine invocation
- labels for routines defined as .def
- each lib routine conaians own symbol table
- linker resolves external addr before creating exe

.global decclare symbol to be external so is available to other modules at link time. Does def for defined symbols and ref for undefined symbols at the same time

#### Specify end of prog

|Mnemonic and Syntax|Desc|
|-|-|
|.end |tell assembler to stop assembling|

optional directive
shld be used as last source statement
assembler ignores any source statements after .end
can use when debugging

### How ASM (Assembly Process)

Pass 1: Find all label and addr for each label, store in symbol table
Pass 2: convert inst to machin lang, using symbol table

Asm inst have 1-to-1 correspondance from .asm to .obj

## Chap 5: Executable Asm Instructions

types:  
- Data Movement  
- Arithmetic  
- Logical / Bit manipulation  
- Rotation  
- Program Control  

||MSP430||
|-|-|-|
|Core instructions|Emulated instructions|Total|
|27|24|51|

Emulated instructions are executed by core instructions. Make coding easier.  

Only core inst are convereted to machine code.  
Emulated inst must be converted to core inst to exec  
e.g.  
inc.w dst will be converted to sub.w #1 dst

behaviour of microprocessor instructions are detailed in the particular instruction set summary of that processor.

### Executable Asm Instructions

#### Data Movement

|instruction| s/d | direction/op | N | Z | C | V | other |
|-----------|-----|--------------|---|---|---|---|-------|
|mov.x (.b / .w) src,dst|src,dst|src -> dst|-|-|-|-|Src not affected|

#### Arithmetic

|instruction| s/d | direction/op | N | Z | C | V | other |
|-----------|-----|--------------|---|---|---|---|-------|
|sxt src| src | src -> src | N = 1 if result < 0 else N = 0| Z = 1 if result = 0 else Z = 0| C = 1 if result not 0 else C = 0| V = 0|copy src bit 7 value to src bits 8-15, Usage case: usig |

|instruction| s/d | direction/op | N | Z | C | V | other |
|-----------|-----|--------------|---|---|---|---|-------|
|add.x (.b / .w) src,dst|src,dst|src + dst -> dst|N = 1 if result < 0 else N = 0|Z = 1 if result = 0 else Z = 0|C = 1 if have carry else C = 0|V = 1 if overflow, else V = 0||
|addc.x (.b / .w) src,dst|src,dst|src + dst + Carry_flag -> dst|N = 1 if result < 0 else N = 0|Z = 1 if result = 0 else Z = 0|C = 1 if have carry else C = 0|V = 1 if overflow, else V = 0|Usage: adding numbers that are bigger than 16 bit|
|dadd.x (.b / .w) src,dst|src,dst|src(BCD) + dst(BCD) -> dst|N = 1 if MSB 1 else N = 0|Z = 1 if result = 0 else Z = 0|C = 1 if result > 0x9999h (.w) or > 0x99h (.b) else C = 0| Undefined |treat each 4bit of hex as decimal|
|sub.x (.b / .w) src,dst|src,dst|dst + (- (src)) -> dst|N = 1 if result < 0 else N = 0|Z = 1 if result = 0 else Z = 0|C = 1 if have carry else C = 0|V = 1 if overflow, else V = 0|2's comp applied to src, is not (dst - src) as this implies has hardware subtractor|
|subc.x (.b / .w) src,dst|src,dst|dst + (- (src)) - Carry_flag -> dst|N = 1 if result < 0 else N = 0|Z = 1 if result = 0 else Z = 0|C = 1 if have carry else C = 0|V = 1 if overflow, else V = 0|2's comp applied to src, Usage: subtracting numbers that are bigger than 16 bit|

Emulated Inst  
|instruction| s/d | direction/op | N | Z | C | V | other |
|-----------|-----|--------------|---|---|---|---|-------|
|ADC.x (.b / .w) dst|dst|addc(.b / .w) #0,dst|addc status|addc status|addc status|addc status|Add carry to dst|
|DADC.x (.b / .w) dst|dst|dadd(.b / .w) #0,dst|dadd status|dadd status|dadd status|dadd status|BDC Add carry to dst|
|dec.x (.b / .w) dst|dst|sub(.b / .w) #1,dst|sub status|sub status|sub status|sub status|decrement dst|
|decd.x (.b / .w) dst|dst|sub(.b / .w) #2,dst|sub status|sub status|sub status|sub status|decrement dst twice|
|inc.x (.b / .w) dst|dst|add(.b / .w) #1,dst|add status|add status|add status|add status|increment dst|
|incd.x (.b / .w) dst|dst|add(.b / .w) #2,dst|add status|add status|add status|add status|increment dst twice|
|sbc.x (.b / .w) dst|dst|dst + 0xFFFFh + borrow_flag OR dst + 0xFFh|subc status|subc status|subc status|subc status|subtract src and borrow OR subtract not(carry_flag) from dst ???????|

#### Logical / Bit Manipulation

core inst:
- and; claer specific bits in dst register
- bis (or operation); set specific bits in dst register
- xor; 2's comp specific bits in dst register

status bits affects each logic op differently

|instruction| s/d | direction/op | N | Z | C | V | other |
|-----------|-----|--------------|---|---|---|---|-------|
|and.x (.b / .w) src,dst|src,dst|src .AND. dst -> dst|N=1 if MSB = 1, else 0|Z = 1 if result 0, else 0|C = 1 if result not 0, else 0 (.NOT. Z)|V = 0 always|at each pos in src, if val is 0, set corresponding pos in dst to 0, else dst pos remain unchanged|
|bis.x (.b / .w) src,dst|src,dst|src .OR. dst -> dst| - | - | - | - |at each pos in src, if val is 1, set corresponding pos in dst to 1, else dst pos remain unchanged|
|xor.x (.b / .w) src,dst|src,dst|src .XOR. dst -> dst|N=1 if MSB = 1, else 0|Z = 1 if result 0, else 0|C = 1 if result not 0, else 0 (.NOT. Z)|V = 1 if src and dst both negative, else V = 0|at each pos in src, if val is 1, set corresponding pos in dst to complement of previous dst val, else dst pos remain unchanged|
|bic.x (.b / .w) src,dst|src,dst|(.NOT. src) .AND. dst -> dst| - | - | - | - |at each pos in src, if val is 1, set corresponding pos in dst to 0, else dst pos remain unchanged|

Emulated inst  
|instruction| s/d | direction/op | N | Z | C | V | other |
|-----------|-----|--------------|---|---|---|---|-------|
|clr.x (.b / .w) dst|dst|0 -> dst; mov(.b / .w)#0,dst|||||clear dst|
|clrc|-|0 -> Carry_flag; bic.w #1,SR|||||clear carry flag|
|clrn|-|0 -> Neg_flag; bic.w #4,SR|||||clear negative flag|
|clrz|-|0 -> Zero_flag; bic.w #2,SR|||||clear zero flag|
|inv.x (.b / .w) dst|dst|(.NOT. dst) -> dst; xor.x (.b / .w) #0(FF)FFh,dst|||||invert all bits in dst|
|setc|-|1 -> Carry_flag; bis.w #1,SR|||||set carry flag|
|setn|-|1 -> Neg_flag; bis.w #4,SR|||||set negative flag|
|setz|-|1 -> Zero_flag; bis.w #2,SR|||||set zero flag|

#### Rotation Inst

type: arithmetic; "through carry"

arithmetic rotate multiply(RLA) or floor divide(RRA) by $2^N$ where N is num bits shifted

swpb (swap bytes) exchange high and low bytes of dst. Word size only.; e.g. 0xAABBh becomes 0xBBAAh

|Arithmetic|||
|-|-|-|
|Name|Desc|Img|
|RLA / Rotate Left Arithmetic|MSB to carry flag, pad LSB with 0|![RLA](jacob-images/RLA.png)|
|RRA / Rotate Right Arithmetic|LSB to carry flag, pad MSB with MSB|![RRA](jacob-images/RRA.png)|

|Through Carry|||
|-|-|-|
|Name|Desc|Img|
|RLC / Rotate Left Carry|MSB to carry flag, pad LSB with 0|![RLC](jacob-images/RLC.png)|
|RRC / Rotate Right Carry|LSB to carry flag, pad MSB with MSB|![RRC](jacob-images/RRC.png)|

Core inst
|instruction| s/d | direction/op | N | Z | C | V | other |
|-----------|-----|--------------|---|---|---|---|-------|
|rrc.x (.b / .w) dst|dst|dst -> dst|N=1 if MSB=1, else N = 0|Z = 1 if result zero, else Z = 0|Loaded from LSB|V = 0 always|dst shift right by one pos, carry shift to msb, then lsb shift into carry|
|rra.x (.b / .w) dst|dst|dst -> dst|N=1 if MSB=1, else N = 0|Z = 1 if result zero, else Z = 0|Loaded from LSB|V = 0 always|dst shift right by one pos,, msb = msb, msb shift into msb-1, then lsb shift into carry, lsb-1 shift into lsb|
|swpb.w dst|dst|dst -> dst|-|-|-|-|R11 = 0xAABBh, swpb.w R11 = 0xBBAAh|

Emulated inst
|instruction| s/d | direction/op | N | Z | C | V | other |
|-----------|-----|--------------|---|---|---|---|-------|
|rlc.x (.b / .w) dst|dst|dst -> dst|N=1 if MSB=1, else N = 0|Z = 1 if result zero, else Z = 0|Loaded from MSB|V = 1 if overflow (aka change of sign) else V = 0|dst shift left by one pos, lsb taken from carry, then msb shift into carry; emulated with ADDC inst|
|rla.x (.b / .w) dst|dst|dst -> dst|N=1 if MSB=1, else N = 0|Z = 1 if result zero, else Z = 0|Loaded from MSB|V = 1 if overflow (aka change of sign) else V = 0|msb shift to carry, dst shift left by one pos, lsb pad with 0; emulated with ADD inst|

rotate left over flow is when you multiply by 2 but get a negative result.

#### Program Control Inst

facilitate disruption of normal sequential flow.  
aka jumps  
jump can be obtained by modifying content of Program Counter(**PC**)  
used for if-else, loops
types: conditional; unconditional

|instruction| s/d | direction/op | N | Z | C | V | other |
|-----------|-----|--------------|---|---|---|---|-------|
|jeq/jz *label*|||||||jump to label if Z = 1|
|jne/jnz *label*|||||||jump to label if Z = 0|
|jc/JHS *label*|||||||jump to label if C = 1|
|jnc/JLO *label*|||||||jump to label if C = 0|
|jn *label*|||||||jump to label if n = 1|
|jge *label*||(N .XOR. V) = 0 / N = V|||||jump to label if greater than or equal|
|jl *label*||(N .XOR. V) = 1 / N != V|||||jump to label if less than|
|jmp *label*|||||||jump to label unconditionally|

jge and jl use cmp inst to change flag before jump call.  
e.g.:  
cmp.w R12,R11  
jge test      ;jump to test if R12 is greater

for signed values, use JGE, JL, JN

for unsigned values, use JLO, JHS

#### Program Control: Bit testing

|instruction| s/d | direction/op | N | Z | C | V | other |
|-----------|-----|--------------|---|---|---|---|-------|
|bit .x (.b / .w) src,dst|src,dst| src .AND. dst, not stored |N = 1 if MSB = 1, else N = 0|Z = 1 if result = 0, else Z = 0|C = 1 if result != 0, else C = 0|V = 0 always|Result is ignored, src dst no changed, only update flags|
|cmp.x (.b / .w) src,dst|src,dst|dst + (-(src)), not stored|N = 1 if MSB = 1, else N = 0 (src >= dst)|Z = 1 if result = 0, else Z = 0 (src = dst)|C = 1 if have carry, else C = 0|V = 1 if arithmetic overflow, else V = 0|Result is ignored, src dst no changed, only update flags|

emulated inst
|instruction| s/d | direction/op | N | Z | C | V | other |
|-----------|-----|--------------|---|---|---|---|-------|
|tst.x (.b / .w) dst| dst | cmp.x (.b /.w) #0,dst|N =1 if dst < 0 else N = 0|Z = 1 if dst = 0 else Z = 0|C = 1 always|V = 0 always|check if is <= 0, Result is ignored, src dst no changed, only update flags|
|br dst| - | mov.w dst,R0 |||||jump direct to dst without condition, similar to "jmp dst"|

# Computer Organisation

## Modular Programming

complex software decompose into less complex modules  
modules designed and tested independantly  
modules can be reused in other projs  
reduce overall program size (modules may be required in different places)  

Chars of good module:  
loose coupling: data within module is entierly independant (or as independant as possible)  
strong modularity: perform single logically coherent task

modules in asm are subroutines  
like functions  
same subroutine can be called from various parts of prog  
on completion, return control to the place where subroutine called  
call and ret instructions is how it is implemented

return location?  
return address is saved to stack before jumping to subroutine
push inst: decrement -> write data  
pop inst: write to dst -> increment (does not erase data al last loc)  
stack aslo used for exception handling, temp storage for local variables / subroutine parameters.  
stack grows towards lower memory addr, start at high RAM area with even addr  
return addr is PC of next inst after subroutine called

stack should exist in RAM. Ensure SP/R1 is initialised to valid RAM location or risk unexpected behaviour

call inst:  
- size: 2 byte for inst, 2 byte for dst addr
- return addr size: 2 byte  
- Stack grows with each call towards lower addr
- Many nested subroutine calls risk stack overflow

ret inst:  
- size: 2 byte  
- pops value at R1 addr into dst, then increment without erasing  
- NOTE any push to stack in subroutine must be managed and popped before ret inst called in order to return correctly.  
    

passing in params:  
- setup before call and cleaned up after ret
- 3 ways: registers, memory block, stack 
  - register:
    - pros: since is register, fast effecient
    - cons: less registers available to use for logic, small num of registers
  - memory block / passing by reference
    - treat portion of memory variable, useful for many params
    - write value to block of mem at predefined mem addr
    - pass mem addr of start of block to subroutine via register
  - stack
    - push param to stack before call then retrieve inside routine
    - no registers, supports recusrsive programming
    - can have many params as long as no stack overflow
    - params in stack MUST be removed immediatly after ret, if not may have unexpected behaviour/stack overflow

local vars/params
- create on entry, released on exit  
- stack is ideal for these  
- temp mem space called stack frame
- stack frame created by adding frame size N to SP
- positive displacements from SP used to access variables, SP is the reference

## Input / Output Techniques (Chpt 7)

CPU / microprocessor by itself not useful yet, need peripherals (interfaces)

Definitions:

    Peripheral:  
    able to be attached to and used with computer, though ont an integral part of it  
    unit or deivce providing peripheral funcions that is connected to the CPU either on the same chip or different chips

    Interface:  
    a device or program enabliung a user to communicate with a computre or for connecting two items of hardware or software  

### Peripherals

Peripherals connect to processor in 2 ways:  
- Loosely coupled
  - via external bus (USB, SCSI, $I^2$C, Firewire)
  - via a network (Ethernet, ATM, wireless)
  - via a port (serial(RS232), parallel, PS2)
- Tightly coupled
  - via fast internal bus (graphics & hard-disck controllers)

Peripherals generally communicate with CPU through I/O interfaces

### Interfaces

Interfacing: process of connecting two device together so they can exchange information  

parts of interface:  
physical connection
hardware  
set of rules/procedures (software, protocols)
follow some Standards (e.g. IEEE)

Type of signals:  
Digital: High or Low  
Analogue: choose from continuous range of voltage values

Analogue-to-Digital Converter (ADC): Analogue measurement of sensor converted into digital form  

Digital-to-Analogue Converter (DAC): Digital output from processor converted to analogue output  

Most coms have different type of I/O subsystems (peripheral modules)  
Therefore have different type of interfaccing requierment  
E.g. printer can use parallel port, keyboard need serial

### Digital Communications

#### Parallel Data Transfer

more than 1 bit transfered simultaneously  
Fast data transfer  
usualy done when processor and device nearby

disadvantages:  
expensive over long dist.  
no garuantee all data arrive simultaneously

#### Serial Data Transfer  

transfer one bit at a time through two/three wires  
Data converted from parallel to serial form before sending  
used for: digital video (VGA), keyboard mouse, LAN  
used on internal communication between processor and peripheral chips.

Advantage:  
Less Expensive  
More robust (no crosstalk, no limitation at high freq/long range)

Disadvantage:  
Slower than parallel (but in current times is generally fast enough at 40Gbps)

Modes:  
Simplex: One way only, A to B  
Half Duplex: Two way, one at a time, A to B XOR B to A.  
Full Duplex / asynchronous transmission: Two way, simultaneous, A to B OR B to A
Synchronous: common clock between Tx and Rx to synchronise bit transfers  
Asynchronous: no common clock required, info made of: 1 start bit, 7/8 bit of info, 1 optional parity bit, 1/1.5/2 stop bits  

Can use tables like ASCII to transit text data

Parameters to be specified before starting communication (Tx and Rx same settings):  
- baud rate of transmission (number of changes to signal per second)
- number of data bits
- optional parity bit
- type of parity
- number of stop bits

1 = Mark  
0 = Space  

Whens serial interface idle, remain in 1 state

Start bit: generally 0 since idle is 1
data: send LSB first
parity: send even/odd parity
stop bit: send 1/1.5/2 stop bits (1's), (1/1.5/2 of baud rate)

e.g. send ASCII 'C', bits: [100 0011], even parity, baud rate = 2400

Tx:  
start: 0  
data: 1100 001  
parity: 1  
stop bit: 11  

total time: 11/2400 sec

how fast signal sent? depend on baud rate.  
if baud rate 2400, 1/2400 sec to send 1 bit  

Rx:  
monitor line for start bit  
start recording after start bit, timing based on agreed baud rate  
samples next N data bits  
Sample parity bit  
check parity (possible parity error here)  
sample for stop bit (possible framing error here if stop bit = 0)

Disadvantage of this type of transmission: 7 bit ascii need 10/11 bits to send

#### Baud Rate

baud rate = 1/T, where T is how many bit per sec  
Common rates: 300, 600, 1200, 2400, 4800, 9600, 19200

#### RS-232 Standard

Serial  
Defines signals connecting between Data Terminal Equipment (DTE) (e.g. computer) and Data Communication Equipment (DCE) (e.g. Modem)  
Specifies:  
- Electrical interface
    - voltage used, max bit rate
- mechanical interface
    - Max distance

![RS-232](jacob-images/RS-232.png)

#### Memory Mapped IO  

Parallel Port and Serial port are IO ports w/ Peripheral modules  
IO ports have peripheral registers (seperate from CPU register). Reason:  
- configure peripheral (e.g. config format)  
- use peripheral (store values from peripharal)

Peripheral registers on same addr bus as memory  
each register has mem addr (for MSP430, peripheral registers addr are from 0x0000 to 0x0200)  
accessed same way as RAM  
MSP430 example:  
P1DIR addr: 0x0204  
- set pin as input(0) or output(1)  
P1OUT addr: 0x0202  
- store output data  
P1IN addr: 0x200  
- show port 1 pin states  

Other devices have isolated IO (e.g. Intel 8086)  
Memory and peripherals have different addr space  
two separate control line, one for each  
Different inst also:  IN/OUT for IO, MOV for mem

#### Polled IO

Polled I/O:  
CPU initiate, control, terminate data transfer by executing instruction  

Inherently inefficient:
- CPU send poll, must wait for reply
- waste time
- ![polled-io](jacob-images/polled-io.png)

Polling: continuously test port to see if data available.  
CPU polls the port if have data available to read / is capable of accepting data
useful when data transfer MUST be completed before program can continue  
e.g.  
- writing into control register of peripheral chip during initialization  
- wait for switch to be pressed before program continue

E.g. CPU polls printer port, checks if prenter ready for msg  
if ready, send, else wait

Advantage:  
- **minimum hardware** interface circuitry between I/O device and processor  
- programmer has **complete control** over entire process  
- easiest method to test and debug

Disadvantage:  
CPU wait in loop, cannot perform anything else **until** data transfer complete  
- **inefficient use** of CPU  
- program execution of CPU held up while waiting for device to ready

#### Interupt-driven IO

Interrupt-driven I/O:  
Device initiates but CPU controls and terminates data transfer  

interrupt is external hardware event  
causes CPU to temporarily suspend current instruction sequence and executer special routine written by programmer (called interrupt service routine A.K.A ISR)
ISR is fast, main program very briefly suspended

useful when timing of data transfer cannot be known beforehand / data transfer occurs infrequently
e.g. sending data to printer, get data from sensor

![interrupt-io](jacob-images/interrupt-io.png)

Advantage:
- efficient use of CPU
  - promptly provides service at request of device  
- CPU can continue with other tasks between interrupts

Disadvantage:
- **more hardware** interface circuitry required between I/O device and processor  
- program **more complex** and **difficult to debug**

Sequence:  
device ready for Data transfer  
send interrupt request to CPU  
CPU execute interrupt service routine for specific device  
ISR transfers data to/from device  

### Bluetooth

Definition:  
- Short-range radio connection technology  
- low power  
- low cost  
- not limited to line of sight  

History:  
- 1994, Ericson's (Sweden) Bluetooth project for radio comms between cellphones over short dist
- Named after Danish king **H**arald **B**laatand, who liked blueberries and had a blue tooth
- Symbol from runic H and B
- 1998, Bluetooth Special interest Group (made of Intel, IBM, Nokia, Toshiba, Ericsson)
- 1999, Version 1.0A specification published
- 2002 and 2005, IEEE standardized Bluetooth as 802.15.1
- Subsequent versions handeled by Bluetooth SIG directly

Version timeline:  
- 1999: 1.0, 1.0A, 1.0B: too many problems  
- 2002: 1.1, IEEE 802.15.1, Wireless personal area network (WPAN) protocol  
- 2005: 1.2, IEEE 802.15.1, improved speed of upto 720 kbps  
- 2007: 2.0 + Enhanced Data Rate (EDR)
- 2007: 2.1 + EDR, Secure Simple Pairing to speed up pairing sequence  
- 2009: 3.0+ , High Speed
- ????: 4.0, (Bluetooth Smart, Bluetooth Low Energy BLE), low energy, smaller devices, longer battery life  
- 2013: 4.1 (4.0 + Core Specification Amendments (CSA) 1,2,3,4)
- 2014: 4.2 (4.1 + flexible internet connectivity)  
- 2016: 5.0 and later
- 2023: 5.4
- 2024: 6.0 announced

Specifications:  
Operating frequency: 2402-2480 MHz
Channels: 79x 1-MHz channels
Data Rate: 1Mbpsusing 1MHz (720kbps/user)
Radio Freq hopping rate: 1600 hops/sec - 0.625 ms/hop
Tx power:  
- Class 1: 20dBm (0.1W) - 100m range
- Class 2: 4dBm (2.5mW) - 10m range  
- Class 3: 0dBm (1mW) - 1m range

## Secondary Memory Subsystems (Chpt 8)

### Memory Hierachy

balance between speed, size and cost

in order of increasing capaccity & access delay:  
- registers
- cache
- main
- secondary

in order of increasing cost:  
- secondary
- main
- cache
- registers

secondary mem on external to microproccessor, largest storage space for data/program

external mem: peripheral storage devices, accessible via i/o controllers

types:  
- Magnetic  
  - Mechanical hard disk
  - floppy disk
- Optical  
  - CD-ROM  
  - CD-RW  
  - DVD  
  - BLUU-RAY
- Semiconductor  
  - Memory Cards  
  - Solid State Drives

### Magnetic Disks

- One or more platters on common spindle
- Use thin mmagnetic film
- Rotate at Constant Rate
- Data arranged in concentric rings called tracks
- read-write heads close proximity to surface

Read Write Head made of conductive coil
may be seperated or single head for both ops

Inductive Writing:  
Current through coil head produces magnetic field  
Pulse sent through head  
Magnetic pattern recorded on surface  

Magneto resistive read:  
is partially shielded magneto resistive (MR) sensor  
electrical resistance depends on direction of magnetic field  
the rising or falling edge itself represents 1 bit

### Data organization and formatting  

data stored in concentric rings, called tracks  
set of all tracks in same relative position on platter, called cylinder  

each trck same width as head  
have gap between tracks to minimise interferences from adjacent tracks

each track divided into sector  
sector may be seperated by gap to reduce precision requierment  
minimum Data block size is one sector  

### Characteristics of Commmon mmodern hard disk  

Movable head  
- one read/write head per side  
- mounted on movable arm  

Double sided Platters

Multiple Platter Disks  
- Most modernn HDDs have mutiple platters per disk  
- each surface has r/w head, all joined ad aligned so all heads in same position for each platter
- Data is striped by cylinder
  - 4Mb block striped into 8 x 512Kb track, can split over mmultiple platter

### Transfer Rate of hard-disk  

Seek Time ($T_s$):  
- Time for head to move to correct track  
Rotational Delay ($T_R$):  
- Time for disk to rotate until read/write head reaches starting positon of target sector  
- dependant on rotational speed (Common denomination RPM)
- RPS = RPM / 60
- Avg $R_T$ = 0.5/RPS
Access Time  ($T_A = T_S + T_R$):  
- Time from request to time head in position  
Transferr Time ($T_T$):  
- Time required to tranfer the required dataafter the head is positioned
- dependant on rotational speed of disk
- dependant on Track Density ($D_T$), number of sectors per track
- dependant on Sector Density ($D_S$), number of bytes per sector
- dependant on number of bytes for the transfer N
- Formula:  $T_T = \frac{N}{(RPS \times D_T \times D_S)} = \frac{N}{D_T \times D_S} \times \frac{1}{RPS}$
- $D_T \times D_S$ = number of bytes on track

$T_{Total} = T_A + T_T$  
$= T_S + T_R + T_T$

### Redundancy @ Surety (Use of RAID)  

Single HDD flaws:  
- access times for moving head to correct pos significantly lowers  transfer rate
- magnetic disk more easily suffer from crashes

Redudndant Array of Independant Disks (RAID)
- num of configs: 7 (0-6)
- some configs distribute data across physical drives (striping) improves access times e.g. Raid 0
- some configs Mirror drive e.g. Raid 1

RAID 0  
- No redundancy
- min 2 disks
- data stripedacross ALL disks
- Round robin striping  
- Advantage: increased speed
  - multiple data request probaly not on same disk
  - disk seeks in parallel
  - set of data lkely to be striped across multiple disks

RAID 1
- Mirrored disks
- min 2 disks
- 2 copies of each stripe on seperate disks
- Advantage: faster read op
  - read from either disk
  - write same as single disk but done on both corresponding strips
- Advantage: simple recovery
  - swap faulty disk &-re mirror
  - no downtime
- Disadvantage: higher cost

RAID 10
- Nested RAID of 1 and 0
- Mirror and stripe
- min 4 disk
- half capacty is for data storage
- fast read/write

## Primary Memory Subsystems (Chpt 9)

## Memory Management



