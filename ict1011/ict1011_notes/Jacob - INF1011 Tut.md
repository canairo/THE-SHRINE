# Tutorials

## Tut 1

Q1a: RISC, since is 1 instruction in few cycles  
Q1b: CISC, since is multi op in 1 instruction  
Q1c: RISC, since is 1 instruction  
Q1d: CISC, since is multi clock in 1 instruction

Q2a: SISD  
Q2b: SIMD  
Q2c: MIMD  

Q3:

Rating 1,2,3 - 1 best, 3 worst

CPU A:  
- Von Neuman  
- System cost

CPU B:  
- Harvard

CPU C:  
- Harvard

Q4a: Arch 1 since have 22 parallel busses  
Q4b: none. need 1 clock to read info, and 1 clock to store info assuming no need clock cycle to process  
Q4c: Arch 3, can read output in one cycle rather than write back to registers and read again from registers like arch 1 and 2

**ANS KEY:**
Q1: CISC, CISC, RISC, CISC

Q2: SISD, SIMD, MIMD

Q3:  
Rating 1,2,3 - 1 best, 3 worst

- System cost: based on num buses and separate meory spaces  
- Device cost: approx system cost  
- Ease of programming: von Neuman, no separation of memory space/unique memory address. Easier to fetch next instruction if all in same memory.  
- Pin count: tied to number of buses  
- Performance, Pure harvard is faster since instruction and data can be fetched separately in one cycle

CPU A:  
- Von Neuman  
- System cost 1=cheap: 1
- Device cost 1=cheap: 1
- Ease of programming 1=easiest: 1
- Pin count 1=lowest: 1
- performance 1=best: 2

CPU B:  
- Harvard
- System cost 1=cheap: 2
- Device cost 1=cheap: 2
- Ease of programming 1=easiest: 2
- Pin count 1=lowest: 1
- performance 1=best: 2

CPU C:  
- Harvard
- System cost 1=cheap: 3
- Device cost 1=cheap: 3
- Ease of programming 1=easiest: 2
- Pin count 1=lowest: 2
- performance 1=best: 1

Q3 Extension: Arch CPU C

Q4:  
Arch 1: 2 bus to ALU, results can be sent back using both  
Arch 2 one bus for all inputs and all outputs  
Arch 3: one bus for all input and output. ALU has a bus from output back to one input

4a : Arch 1  
4b : None  
4c : Arch 3 has dedicated bus for this but arch 1 is almost the same. Arch 2 is less effecient than both


## Tut2 ANS

for subtraction: assume CPU perform 2's complement addition and the status flags will set/clear based on addition

Q1a:

|$^1$| | | | | | | | |
|----|-|-|-|-|-|-|-|-|
|    |1|0|0|1|1|0|0|1|
|  + |1|1|0|0|0|0|0|0|
| [1]|0|1|0|1|1|0|0|1|
C = 1, V = 1
is overflow since (A(Sign) and B(Sign)) != C(Sign)

Q1b:

|$^1$|$^1$|$^1$|$^1$| | | |$^1$| |
|----|----|----|----|-|-|-|----|-|
|    |  1 |  0 |  1 |1|0|1|  0 |1|
|  + |  1 |  1 |  0 |1|0|0|  0 |1|
| [1]|  1 |  0 |  0 |0|0|1|  1 |0|
C = 1, n = 1

Q1c:
0xFF + 0x01
|$^1$|$^1$|$^1$|$^1$|$^1$|$^1$|$^1$|$^1$| |
|----|----|----|----|----|----|----|----|-|
|    |  1 |  1 |  1 |  1 |  1 |  1 |  1 |1|
|  + |  0 |  0 |  0 |  0 |  0 |  0 |  0 |1|
| [1]|  0 |  0 |  0 |  0 |  0 |  0 |  0 |0|
C = 1, Z = 1 (WHY NO OVERFLOW?)
is not overflow since (A(Sign) != B(Sign))

Q1d:
0x26 + 0x54
|    |$^1$|$^1$|$^1$|$^1$|$^1$|$^1$|    | |
|----|----|----|----|----|----|----|----|-|
|    |  0 |  0 |  1 |  0 |  0 |  1 |  1 |0|
|  + |  0 |  1 |  0 |  1 |  1 |  0 |  1 |0|
| [0]|  1 |  0 |  0 |  0 |  0 |  0 |  0 |0|
V = 1, N = 1

Q1e:
1010 1010 - 1010 1010  
2's comp:
1010 1010 -1 = 1010 1001
= 0101 0110

|$^1$|$^1$|$^1$|$^1$|$^1$|$^1$|$^1$|    | |
|----|----|----|----|----|----|----|----|-|
|    |  1 |  0 |  1 |  0 |  1 |  0 |  1 |0|
|  + |  0 |  1 |  0 |  1 |  0 |  1 |  1 |0|
| [1]|  0 |  0 |  0 |  0 |  0 |  0 |  0 |0|
z = 1,, c = 1
is not overflow since (A(Sign) != B(Sign))

Q1f:
0011 0010 - 0100 1100  
2's comp:
0100 1100 - 1 = 0100 1011
= 1011 0100

|    |    |$^1$|$^1$|    |    |    |    | |
|----|----|----|----|----|----|----|----|-|
|    |  0 |  0 |  1 |  1 |  0 |  0 |  1 |0|
|  + |  1 |  0 |  1 |  1 |  0 |  1 |  0 |0|
| [0]|  1 |  1 |  1 |  0 |  0 |  1 |  1 |0|
N = 1
is not overflow since (A(Sign) != B(Sign))

Q1g:
0xCF - 0x89 = 1100 1111 - 1000 1001
2's comp:
1000 1001 - 1 = 1000 1000
= 0111 0111

|$^1$|$^1$|$^1$|$^1$|$^1$|$^1$|$^1$|$^1$| |
|----|----|----|----|----|----|----|----|-|
|    |  1 |  1 |  0 |  0 |  1 |  1 |  1 |1|
|  + |  0 |  1 |  1 |  1 |  0 |  1 |  1 |1|
| [1]|  0 |  1 |  0 |  0 |  0 |  1 |  1 |0|
C = 1
is not overflow since (A(Sign) != B(Sign))

Q1h:
0x83 - 0x11 = 1000 0011 - 0001 0001
2's comp:
0001 0001 - 1 = 0001 0000
= 1110 1111

|$^1$|    |   |    |$^1$|$^1$|$^1$|$^1$| |
|----|----|----|----|----|----|----|----|-|
|    |  1 |  0 |  0 |  0 |  0 |  0 |  1 |1|
|  + |  1 |  1 |  1 |  0 |  1 |  1 |  1 |1|
| [1]|  0 |  1 |  1 |  1 |  0 |  0 |  1 |0|
v = 1, c = 1
is overflow since (A(Sign) and B(Sign)) != C(Sign)

-----------------

Q2a
R5 = 0000 0110 = #6
R6 = 0000 0110 = #6

Note:  
MOV.b #6,R5 can be considered direct address

Q2b
Z means off
|Instruction|Step|PC |   IR    |Data Bus |Address Bus|R5 |R6 |
|:---------:|:--:|:-:|:-------:|:-------:|:---------:|:-:|:-:|
|MOV #6, R5 |  0 | 0 |    0    |    Z    |     Z     | 0 | 0 |
|           |  1 | 0 |    0    |MOV #6,R5|     0     | 0 | 0 |
|           |  2 | 0 |MOV #6,R5|    Z    |     Z     | 0 | 0 |
|           |  3 | 1 |MOV #6,R5|    6    |     Z     | 0 | 0 |
|           |  4 | 1 |MOV #6,R5|    Z    |     Z     | 6 | 0 |
|           |  5 | 0 |MOV #6,R5|    Z    |     1     | 6 | 0 |
|-----------|----|---|---------|---------|-----------|---|---|
|ADD R5,R6  |  6 | 0 |MOV #6,R5|ADD R5,R6|     1     | 6 | 0 |
|           |  7 | 0 |ADD R5,R6|    Z    |     Z     | 6 | 0 |
|           |  8 | 0 |ADD R5,R6|    6    |     Z     | 6 | 0 |
|           |  9 | 0 |ADD R5,R6|    0    |     Z     | 6 | 0 |
|           | 10 | 0 |ADD R5,R6|    6    |     Z     | 6 | 6 |

Note, registers do not have addresses. only memory has addresses  
in ASM, even if you write R5 and R6 as src and dst in the instruction, they dont actually have an address since is register

Q2c

Cannot be MSP430 since MSP430 instructions are always stored as even addresses

---------------

Q3a
|Address |Content|
|--------|-------|
|0x00220B| 0x56  |
|0x00220A| 0xB6  |
|0x002209| 0xa5  |
|0x002208| 0x31  |
|0x002207| 0x31  |
|0x002206| 0x30  |
|0x002205| 0x31  |
|0x002204| 0x54  |
|0x002203| 0x43  |
|0x002202| 0x49  |
|0x002201| 0xBB  |
|0x002200| 0xE7  |

Q3b
(i) H`31
(i1) H`3154
(iii) H\`31 H\`31 H\`30 H\`31 H\`54 H\`43 H\`49  

31 = 0011 0001 = 1
31 = 0011 0001 = 1
30 = 0011 0000 = 0
31 = 0011 0001 = 1
54 = 0101 0100 = T
43 = 0100 0011 = C
49 = 0100 1001 = I


## Tut3

1.
Assume MSP430
a. R11 0x0034
R0 = 0x4432

b. R11 0x3002
R0 = 0x4432

c. R11 0xFFFF
R0 = 0x4434

d. R11 0xFACE
R0 = 0x4434

e. R11 0xFACE
R0 = 0x4432

f. R11 0xFACE
R12 0x3004
R0 = 0x4432

g. R11 0x0078
R0 = 0x4434

b. 0x3002 =  0x78
0x3003 = 0x00
R0 = 0x4436

2.
a.
ADD.W R10,R9
0101 1010 0 0 00 1001
0x5A09

b.
MOV.W #0,R9
0100 0011 0 0 00 1001 
0x4309

c.
MOV.B &5566H,R9
0100 0010 0 1 01 1001
0101 0101 0110 0110
0x4259
0x5566

d,
MOV.W &2233H,&5566h
0100 0010 1 0 01 0010
0010 0010 0011 0011
0101 0101 0011 0011
0x4292
0x2233
0x5566

e.
PUSH.W R1
0001 0010 0 0 00 0001
0x1201

f.
RETI
0001 0011 0000 0000
0x1300

3.
mov.w R10,R11
size 1 word
Fetch 1 cycle
decode 0
exec 0
write 0

mov.w @R10,R11
size 1 word
Fetch 2 cycle
decode 0
exec 1 cycle
write 0

a. need extra exec cycle as need read data from memory at addr (Value of R10)

b.
fig q3a uses 6 words 12 byte, and 9 cycles to complete
fig q3b uses 4 words 8 byte and only 5 cycles to complete

c.
MSP430 reduces the size of the instruction from 2 word to 1 word with the constant generator and reduces the number of cycles to execute from 2 to 1.
Without the constant generator, the instruction will need to store the value of #0 in the next mem addr after the inst.
It reduces the exec cycles as reading from the constant generator uses 0 cycles but reading the value from memory uses 1 cycle


## Tut 4

Q1  
a.  

|No.|Mnemonics|Instruction length (in bytes)|No. of cycles|
|-|-|-|-|
|Q1.1|mov.w R5 R1|2|1|
|Q1.2|mov.w #10,R10|4|2|
|Q1.3|add.w #10,R10|4|2|
|Q1.4|add.b &2000H,R12|4|3|
|Q1.5|call #44h|4|2|

b.  
May change the location of return for subroutine calls or interrupts

c.  
i. uses same inst, 1.1 uses fewer cycles as is reading both src and dst from registers. 1.2 needs to read next mem add for value to move into dst, needing 1 additional cycle.
ii. both need 4 byte mem space and use 2 cycle as both need to read next mem addr after inst for value. only inst is different.
iii. 1.3 is word op while 1.4 is byte op. 1.4 needs 2 additional cycles as needs to fetch value fromm mem addr in RAM while 1.3 only needs 1 additional cycle as is reading next mem addr for value.

Q2  
a.  
Array .space 120

space and not sect or usecct as qn never say to to create in different section. means creating in current mem section.

b.  
Num1 .equ 60000

does not put this into memory after assembling. only replacces evey instance of Num1 in asm code with 60000

c.

Fig 2 code:
CodeSeg .equ    0x4400
DataSeg .set    0x3400

        .data
Vdata   .byte   3
Wdata   .word   10,-1
Xdata   .space  2
Ydata   .string "BA","BY"
Zdata   .word   99h

        .text
RESET   mov.w   #10,R4
Copy    mov.w   #Vdata,R10
        mov.w   #DataSeg,R11
Loop    dec.b   R4
        jne     Loop

        .end


i.  
.data
0000        3 (Vdata)
0001        
0002-0003   10 (Wdata)
0004-0005   -1 (Wdata)
0006-0007   (Xdata)
0008-0009   "BA" (Ydata)
0010-0011   "BY" (Ydata)
0012-0014   99h (Zdata)

.text
0000-0001   mov.w #10,R4
0002-0003   #10
0004-0005   mov.w #3,R10
0006-0007   #3
0008-0009   mov.w 0x3400h,R11
0010-0011   0x3400h
0012-0013   dec.b R4
0014-0015   jne 0012

ii. 
Vdata: 0x2400
Wdata: 0x2402
Xdata: 0x2406
Ydata: 0x2408
Zdata: 0x240A

RESET: 0x4400
Copy: 0x4404
Loop: 0x440A


## Tut 5

Q1: 
mov.w #4567h,R11
mov.w #0123h,R12
add.w #CDEF,R11
addc.w #89AB,R12

Q2:  
a: xor.w #8001,R10  
b: mov.w #0,R10
bic.w #FFFFh,R10
and.w #0000h,R10
sub.w R10,R10

Q3:  
a:  
sxt R10  
mov.w R10,R11  
add.w R11,R11  
addc.w R11,R11  
addc.w R10,R11  

sxt R10  
mov.w R10,R11  
rla R11  
rla R11  
add.w R10,R11  


b:  
rlc.w R9
rlc.w R9
and.w #0001,R9  

and.w #0x8000,R9
rlc.w R9



## Tut 6

Q1  
a: R1 = 0x30E4  
b: push.w R10       OR      push R10 (since is always word)
c: add.w #8,R1      OR      add.w #8,SP
d: mov.w 6(R1),R10   WRONG should be 4(R1) since R1 is 1st item, 2(R1) is 2nd item, 4(R1) is 3rd item 

Q2  
a, i: immediate
ii: #0x4434  
b: value, using registers   WRONG, passed by reference as have to go to register to get value. Register and stack can be either pass by value or pass by reference, see usage
c:  
b1: PC[0x4410], SP[0x30FE]  
b2: PC[0x4416], SP[0x30FC]  
b3: PC[0x4434], SP[0x30FA]  
d: after jump back from subroutine, SP = 0x30FC, then -2, 0x30FA, CORRECTION: contents of R10 are 0x441a since return addr at position -2(SP) are not erased on pop.
e: add.w #4,SP  
f:  
push R10
push R11
push R12
mow.w 8(SP),R10       THIS ONLY GETS ADDRESS NOT VALUE  
mov.w 10(SP),R11      THIS ONLY GETS ADDRESS NOT VALUE  
mov.w 8(SP),R12       Correction     mov.w @R10,E12
add.w R10,R12         Correction     add.w R12,R12
mov.w R12,10(SP)      Correction     mov.w R12,0(R11)
pop R12
pop R11
pop R10
ret

## Tut 7

1a: Raw transmit 1011001, actual data 1001101, letter: M

1b: even  

1c: parity is only able to check if 1 bit was changed, Rx would not be able to know the data is wrong, parity only able to detect odd number of errors

1d: 0.104ms (to 3dp), 960 chars per sec

1e: 9600 / 9bits = 1066.667 chars per sec (to 3dp), sacrifice error detection capability

2.1: 100 micro second = 0.1ms, max char rate = 10 000 chars per sec, 10 bit per char, baud rate is 100 000  

2.2 a: 100ms = 0.1 sec, 10 scan per sec, num sec in 8 hour = 8 *60 *60 = 28800. total scan = 288000
2.2 b: $\frac{288000-90}{288000} = \frac{99.96875}{100}$

## Tut 8

when stripe by cylinder,
cylinder to cylinder, start point not same so need multiplly rotation delay for each cylinder read  
within cylinder, start location of all tracks accross surfaces is synced.

time / RPM = time taken per rotation
RPM / time = rotation per time

Q1 a: 512 *200 * 6000 * 8 = 4.577 Gb  

b: (7200/60)RPS * 200 sector per track * 512 byte per sector = 12 288 000 byte per second

correction:  
$\frac{N}{D_T \times D_S} \times \frac{1}{RPS}$  
N = num bytes per track = 512 bytes per sector x 200 sector per track

c: (64 * 1024)/512 = num sectors 128  
seek time = 2.5ms track to track. Num tracks = 6000
rotation delay = 0.5/(7200/60) = 4.17ms
Transfer time per block = (128/200) how much of circle to turn * (60/7200) time taken to turn one rotation

d:  
total tracks = 6cylinder * 8 tracks per cylinder = 48

time to read 6 tracks: 4ms seek time + 6 cylinder(8 track(60/7200)) + 0.5(6(7200/60)) + (6-1)(2.5ms)  

time to read across platter: 4ms seek time + (60/7200)48 tracks + 0.5(48(7200/60)) + (48-1)(2.5ms)

data striping by cylinder reduces need to move read arm, decreasing read time

q2:  
a:  
Raid0 cap: 100*6
Raid1 cap: every disk copies disk 1 so cap is 100gb
Raid10 cap: (100*6)/2

b:  
disk1: BLK1,BLK2
disk2: BLK1,BLK2
disk3: BLK3,BLK4
disk4: BLK3,BLK4
disk5: BLK5,BLK6
disk6: BLK5,BLK6

disk1: BLK1,BLK4
disk2: BLK1,BLK4
disk3: BLK2,BLK5
disk4: BLK2,BLK5
disk5: BLK3,BLK6
disk6: BLK3,BLK6

disk1: BLK1,BLK3,BLK5
disk2: BLK1,BLK3,BLK5
disk3: BLK1,BLK3,BLK5
disk4: BLK2,BLK4,BLK6
disk5: BLK2,BLK4,BLK6
disk6: BLK2,BLK4,BLK6

## Quiz 1:

- 16bit RISC
- PUSH #1000h, SP @ 1234, Value of R1 i.e. SP after exec = 1232
- R0 = PC
- Instructions len = even, 2,4,6
- according to quick reference : [0100][1010][0][1][00][1011] = 4A4B
- 16 bit data bus
- mov.b R9, R10,
- - where R9=0x1234, R10=0x6789:
- - when move byte, use lower byte and zero upper byte
- 1234 stored at 2000H: 
- - 2000H = 34H 
- - 2001H = 12H

## Lab 2

1. Task 1
   - mov.b # -1, R5 R5 = 0x00FF
   - mov.w # -1, R6 R6 = 0xFFFF
   - mov.w # -1234, R7 R7 = 0xEDCC
   - mov.w # -1234h, R8 R8 = 0xEDCC
   - mov.w # 'ABC', R9 R9 = ????
2. Task 2
   - mov.b # -1, R5 R5 = 0x00FF
   - mov.w # -1, R6 R6 = 0xFFFF
   - mov.w # -1234, R7 R7 = 0xFB2E         This is because no h suffix, so -1234 is decimal which gets converted to binary
   - mov.w # -1234h, R8 R8 = 0xEDCC
   - mov.w # 'ABC', R9 R9 = 0x4241         0x41 is 65 which in ASCII is A, wince is word only able to store 'AB', C is dropped
3. Task 3
    mov.b #01h, &2400h
    mov.b #0Ah, &2401h
    mov.w #1234h, &2402h
    mov.w #5678h, &2403h
    mov.w #9ABCh, &2404h

    0x2405: 0x9A
    0x2404: 0xBC
    0x2403: 0x12 then 0x56
    0x2402: 0x34 then 0x78
    0x2401: 0x00
    0x2400: 0x01 then 0x0A
    
4. Task 4
    mov.b #01h, &2400h
    mov.b #0Ah, &2401h
    mov.w #1234h, &2402h
    mov.w #5678h, &2403h
    mov.w #9ABCh, &2404h

    0x2405: 0x9A
    0x2404: 0xBC
    0x2403: 0x12 then 0x56
    0x2402: 0x34 then 0x78
    0x2401: 0x0A                Can address odd addr if doing byte op
    0x2400: 0x01
5. Task 5
   add.w R1, R2 = 0101 0001 0000 0010, 2 byte
   mov.w #1234h, R1 = 0100 0000 0011 0001    0001 0010 0011 0100, 4 byte
   sub.b #5566h, &3000h = 1000 0000 1111 0010    0101 0101 0110 0110    0011 0000 0000 0000
6. Task 6
    add.w R1, R2 = 0101 0001 0000 0010, 2 byte, 0x5102
   mov.w #1234h, R1 = 0100 0000 0011 0001    0001 0010 0011 0100, 4 byte, 0x4031 0x1234
   sub.b #5566h, &3000h = 1000 0000 1111 0010    0101 0101 0110 0110    0011 0000 0000 0000, 6 byte, 0x80F2 0x5566 0x3000


## Lab 4

