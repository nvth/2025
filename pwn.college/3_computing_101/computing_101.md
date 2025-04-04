## Map
[Dojos](#dojos)
### Content
-   [1. Your First Program](#1-your-first-program)
-   [2. Software Introspection](#2-software-introspection)
-   [3. Computer Memory](#3-computer-memory)
-   [4. ](#)
-   [5. ](#)
-   [6. ](#)
-   [7. ](#)
-   [8. ](#)
-   [9. ](#)
-   [10. ](#)
-   [11. ](#)
-   [12. ](#12)
## Dojos

### 1. Your First Program
#### 1.1. Your First Register
```bash
using mov to mov value to rax
eg: mov rax, 1337
below is my log file work with `mov`
---
hacker@your-first-program~your-first-register:~$ touch rax-chall.s
hacker@your-first-program~your-first-register:~$ vim rax-chall.s 
hacker@your-first-program~your-first-register:~$ /challenge/check rax-chall.s 

Checking the assembly code...
... YES! Great job!


Congratulations, you have written your first program!
Now let's see what happens when you run it:

hacker@your-first-program~your-first-register:/home/hacker$ /tmp/your-program
Segmentation fault (core dumped)
hacker@your-first-program~your-first-register:/home/hacker$ 

... uh oh. The program crashed! We'll go into more details about
what a Segmentation Fault is later, but in this case, the program
crashed because, after the CPU moved the value 60 into rax, it was
never instructed to stop execution. With no further instructions
to execute, and no directive to stop, it crashed.

In the next level, we'll learn about how to stop program execution.
For now, here is your flag for your first (crashing) program!


Here is your flag!
pwn.college{EKwI3dNxNsbYwnhyTHsE85ZR8PR.QXzQDO1wCN2gjNwEzW}

hacker@your-first-program~your-first-register:~$ 

```
#### 1.2. Your First Syscall
```bash
GOAL
Now, the syscall number of exit is 60. Go and write your first program: it should move 60 into rax, then invoke syscall to cleanly exit!

----exit.s
mov rax, 60
syscall
----
Log file

hacker@your-first-program~your-first-syscall:~$ touch exit.s
hacker@your-first-program~your-first-syscall:~$ vim exit.s 
hacker@your-first-program~your-first-syscall:~$ /challenge/check exit.s 

Checking the assembly code...
... YES! Great job!

Okay, now you have written your first COMPLETE program!
All it'll do is exit, but it'll do so cleanly, and we can
build from there!

Let's see what happens when you run it:

hacker@your-first-program~your-first-syscall:/home/hacker$ /tmp/your-program
hacker@your-first-program~your-first-syscall:/home/hacker$ 

Neat! Your program exited cleanly! Let's push on to make things
more interesting! Take this with you:


Here is your flag!
pwn.college{QXf50P_p20VqRZNYSdrpftFXOww.QX4YDO1wCN2gjNwEzW}

hacker@your-first-program~your-first-syscall:~$ 

```
#### 1.3. Exit Codes
```bash
rdi? 
---GOAL 
In this challenge, you must make your program exit with the exit code of 42. Thus, your program will need three instructions:

Set your program's exit code (move it into rdi).
Set the system call number of the exit syscall (mov rax, 60).
syscall!
---
---ec.s
mov rdi, 42
mov rax, 60
syscall
---
Below is log file

hacker@your-first-program~exit-codes:~$ touch ec.s
hacker@your-first-program~exit-codes:~$ vim ec.s 
hacker@your-first-program~exit-codes:~$ /challenge/check e
File e not found.
hacker@your-first-program~exit-codes:~$ /challenge/check ec.s 

Checking the assembly code...
... YES! Great job!

Let's check what your exit code is! It should be 42 to succeed!

Go go go!

hacker@your-first-program~exit-codes:/home/hacker$ /tmp/your-program
hacker@your-first-program~exit-codes:/home/hacker$ echo $?
42
hacker@your-first-program~exit-codes:/home/hacker$ 

Neat! Your program exited with the correct error code! But in this level,
we built the executable for you. Next, you'll learn how to build the executable
yourself, and then you'll be ready to walk the path of Assembly!

For now, take this with you:



Here is your flag!
pwn.college{o1WCP5c4ev0ATz-uA0v5TQhftAO.QXwcDO1wCN2gjNwEzW}

hacker@your-first-program~exit-codes:~$ 
```
#### 1.4. Building Executables
```bash
using `as` to make executables file asembly
eg: as -o asm.o asm.s
---asm.s
.intel_syntax noprefix
.global _start
_start:
mov rdi, 42
mov rax, 60
syscall
---

---log file
hacker@your-first-program~building-executables:~$ touch asm.s
hacker@your-first-program~building-executables:~$ vim asm.s 
hacker@your-first-program~building-executables:~$ as -o asm.o asm.s
hacker@your-first-program~building-executables:~$ ld -o exe asm.o
hacker@your-first-program~building-executables:~$ ./exe
hacker@your-first-program~building-executables:~$ echo $?
42
hacker@your-first-program~building-executables:~$ /challenge/check ./exe

Checking the assembly code...
... YES! Great job!

Let's check what your exit code is! It should be 42 to succeed!

Go go go!

hacker@your-first-program~building-executables:/home/hacker$ /tmp/your-program
hacker@your-first-program~building-executables:/home/hacker$ echo $?
42
hacker@your-first-program~building-executables:/home/hacker$ 

Neat! Your program exited with the correct error code! But what
if it hadn't? Next, we'll learn about some simple debugging.
For now, take this with you:



Here is your flag!
pwn.college{wJyoBjePFH3H23qtsvkgAu8-oez.0FM3IDMxwCN2gjNwEzW}

hacker@your-first-program~building-executables:~$ 
---
```
#### 1.5. Moving Between Register
```bash
---goal
Analyst : The secret value was saved on rsi
Requirement : Write script return exit code from rax.
---
---mbr.s
mov rsi, rdi
mov rax, 60
syscall
---
---logfile
acker@your-first-program~moving-between-registers:~$ ls
COLLEGE  asm.o	data.txt  exit.s	leap	      rax-chall.s  t
Desktop  asm.s	ec.s	  instruction	myflag	      rm	   the-flag
PWN	 core	exe	  instructions	not-the-flag  script.sh    win
hacker@your-first-program~moving-between-registers:~$ touch mbr.s
hacker@your-first-program~moving-between-registers:~$ vim mbr.s 
hacker@your-first-program~moving-between-registers:~$ /challenge/check mbr.s 

Checking the assembly code...
... oops, we found an issue! Details below:

You must set each of the following registers (using the mov instruction):
    rax, rdi
hacker@your-first-program~moving-between-registers:~$ vim mbr.s 
hacker@your-first-program~moving-between-registers:~$ ls
COLLEGE  asm.o	data.txt  exit.s	leap	not-the-flag  script.sh  win
Desktop  asm.s	ec.s	  instruction	mbr.s	rax-chall.s   t
PWN	 core	exe	  instructions	myflag	rm	      the-flag
hacker@your-first-program~moving-between-registers:~$ /challenge/check 
Please input your assembly. Press Ctrl+D when done!
Your binary failed to disassemble.
hacker@your-first-program~moving-between-registers:~$ /challenge/check mbr.s 

Checking the assembly code...
... oops, we found an issue! Details below:

You must set each of the following registers (using the mov instruction):
    rax, rdi
hacker@your-first-program~moving-between-registers:~$ vim mbr.s 

[No write since last change]
 02:31:46 up 112 days,  1:19,  0 user,  load average: 6.58, 6.52, 7.62
USER     TTY        LOGIN@   IDLE   JCPU   PCPU WHAT

Press ENTER or type command to continue
hacker@your-first-program~moving-between-registers:~$ /challenge/check 
Please input your assembly. Press Ctrl+D when done!
mbr.s
Check failed:

Your assembly did not assemble cleanly. The errors:
- Error: no such instruction: `mbr.s'
hacker@your-first-program~moving-between-registers:~$ /challenge/check mbr.s 

Checking the assembly code...
... oops, we found an issue! Details below:

You must set each of the following registers (using the mov instruction):
    rax, rdi
hacker@your-first-program~moving-between-registers:~$ vim mbr.s
hacker@your-first-program~moving-between-registers:~$ /challenge/check mbr.s 

Checking the assembly code...
... YES! Great job!

Let's check what your exit code is! It should be our secret
value stored in register rsi (value 179) to succeed!

hacker@your-first-program~moving-between-registers:/home/hacker$ /tmp/your-program
hacker@your-first-program~moving-between-registers:/home/hacker$ echo $?
179
hacker@your-first-program~moving-between-registers:/home/hacker$ 

Neat! Your program passed the tests! Great job!

Here is your flag!
pwn.college{A9aSNbQBphn-Y_UKrDStVurOIHV.QX5QTN2wCN2gjNwEzW}

hacker@your-first-program~moving-between-registers:~$ 
---
```
### 2. Software Introspection
#### 2.1. Tracing Syscall
```bash
---goal
syscall trace a script, get a value - which passed to alarm parameter
---
---log file
hacker@introspecting~tracing-syscalls:~$ strace /challenge/trace-me 
execve("/challenge/trace-me", ["/challenge/trace-me"], 0x7fff357f09b0 /* 27 vars */) = 0
alarm(13744)                            = 0
exit(0)                                 = ?
+++ exited with 0 +++
hacker@introspecting~tracing-syscalls:~$ /challenge/submit-number 13744
CORRECT! Here is your flag:
pwn.college{EiGjthXw1jH-hm9wQCHtCMXXQVf.QXxcDO1wCN2gjNwEzW}
hacker@introspecting~tracing-syscalls:~$ 
---
```
#### 2.2. Starting GDB
```bash
---goal
using GNU Debugger (gdb)
---
---logfile
hacker@introspecting~starting-gdb:~$ gdb /challenge/debug-me 
GNU gdb (Ubuntu 9.2-0ubuntu1~20.04.2) 9.2
Copyright (C) 2020 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from /challenge/debug-me...
(No debugging symbols found in /challenge/debug-me)


You successfully started GDB!
Here is the secret number: 28961
Submit that with /challenge/submit-number. Goodbye!
hacker@introspecting~starting-gdb:~$ /challenge/submit-number 28961
CORRECT! Here is your flag:
pwn.college{gGtjSx0zORvdL3VM_D-kYLMwZtm.0VMzITNxwCN2gjNwEzW}
hacker@introspecting~starting-gdb:~$ 
---
```
#### 2.3. Starting Programs in GDB
```bash
---goal
Debug /challenge/debug-me
How to use `starti` command
---

---logdile
hacker@introspecting~starting-programs-in-gdb:~$ gdb /challenge/debug-me 
GNU gdb (Ubuntu 9.2-0ubuntu1~20.04.2) 9.2
Copyright (C) 2020 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from /challenge/debug-me...
(No debugging symbols found in /challenge/debug-me)
(gdb) starti


You successfully started your program!
Here is the secret number: 29668
Submit that with /challenge/submit-number. Goodbye!
hacker@introspecting~starting-programs-in-gdb:~$ gdb /challenge/debug-me 
GNU gdb (Ubuntu 9.2-0ubuntu1~20.04.2) 9.2
Copyright (C) 2020 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<http://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
Reading symbols from /challenge/debug-me...
(No debugging symbols found in /challenge/debug-me)
(gdb) starti


You successfully started your program!
Here is the secret number: 29668
Submit that with /challenge/submit-number. Goodbye!
starting-programs-in-gdb:~$ /challenge/submit-number 29668
CORRECT! Here is your flag:
pwn.college{8rv4BuXEhrzX3FkVES3a_yunipN.0lMzITNxwCN2gjNwEzW}
hacker@introspecting~starting-programs-in-gdb:~$ 
---
```
### 3. Computer Memory
#### 3.1 Load from memory
```bash
---goal
Retrieving value from address of rdi
---
---rfm.s
mov rdi, [133700]
mov rax, 60
syscall
---
---logfile
hacker@memory~loading-from-memory:~$ ls
COLLEGE  PWN   ec.s	    instructions  pwnc	       rm  the-flag  win
Desktop  core  instruction  myflag	  rax-chall.s  t   tmp
hacker@memory~loading-from-memory:~$ cd pwnc/
hacker@memory~loading-from-memory:~/pwnc$ touch rfm.s
hacker@memory~loading-from-memory:~/pwnc$ vim rfm.s 
hacker@memory~loading-from-memory:~/pwnc$ as -o rfm.o rfm.s 
hacker@memory~loading-from-memory:~/pwnc$ ld -o rfm rfm.o
hacker@memory~loading-from-memory:~/pwnc$ ./rfm 
Segmentation fault (core dumped)
hacker@memory~loading-from-memory:~/pwnc$ echo $?
139
hacker@memory~loading-from-memory:~/pwnc$ /challenge/check rfm.s

Checking the assembly code...
... YES! Great job!

Let's check what your exit code is! It should be our secret value
stored at memory address 133700 (value 207) to succeed!

hacker@memory~loading-from-memory:/home/hacker/pwnc$ /tmp/your-program
hacker@memory~loading-from-memory:/home/hacker/pwnc$ echo $?
207
hacker@memory~loading-from-memory:/home/hacker/pwnc$ 

Neat! Your program passed the tests! Great job!

Here is your flag!
pwn.college{Qx-9aPmEomgWX8MQDpEBBJKTPM4.QX0ITO1wCN2gjNwEzW}
---
```
#### 3.2. More loading practice
```bash
---logfile
hacker@memory~more-loading-practice:~/pwnc/mlp$ /challenge/check mlp.s 

Checking the assembly code...
... YES! Great job!

Let's check what your exit code is! It should be our secret value
stored at memory address 123400 (value 171) to succeed!

hacker@memory~more-loading-practice:/home/hacker/pwnc/mlp$ /tmp/your-program
hacker@memory~more-loading-practice:/home/hacker/pwnc/mlp$ echo $?
171
hacker@memory~more-loading-practice:/home/hacker/pwnc/mlp$ 

Neat! Your program passed the tests! Great job!

Here is your flag!
pwn.college{4NFoVZxAUPzbvy9KVmCPiqLWi1I.QXwMTO1wCN2gjNwEzW}

hacker@memory~more-loading-practice:~/pwnc/mlp$ 
---
```
#### 3.3. Dereferencing Pointers
```bash
---goal
how to use `rax` is pointer
---
---logifle
hacker@memory~dereferencing-pointers:~/pwnc$ ls
core  mlp  rfm	rfm.o  rfm.s
hacker@memory~dereferencing-pointers:~/pwnc$ mkdir dp
hacker@memory~dereferencing-pointers:~/pwnc$ cd dp/
hacker@memory~dereferencing-pointers:~/pwnc/dp$ ls
hacker@memory~dereferencing-pointers:~/pwnc/dp$ vim dp
hacker@memory~dereferencing-pointers:~/pwnc/dp$ ls
hacker@memory~dereferencing-pointers:~/pwnc/dp$ vim dp.s
hacker@memory~dereferencing-pointers:~/pwnc/dp$ /challenge/check dp.s
This challenge expects 3 instructions, but you provided 2.
hacker@memory~dereferencing-pointers:~/pwnc/dp$ vim dp.s 
hacker@memory~dereferencing-pointers:~/pwnc/dp$ /challenge/check dp.s

Checking the assembly code...
... YES! Great job!

Let's check what your exit code is! It should be our secret
value pointed to by rax (value 43) to succeed!

hacker@memory~dereferencing-pointers:/home/hacker/pwnc/dp$ /tmp/your-program
hacker@memory~dereferencing-pointers:/home/hacker/pwnc/dp$ echo $?
43
hacker@memory~dereferencing-pointers:/home/hacker/pwnc/dp$ 

Neat! Your program passed the tests! Great job!

Here is your flag!
pwn.college{EPv-yhQJ4eY5UYWoZ2dKCN0CGQr.QXxMTO1wCN2gjNwEzW}

hacker@memory~dereferencing-pointers:~/pwnc/dp$ 
---
```
#### 3.4. Dereferencing Yourself
```bash
---goal
using rdi pointer itsel
---
---file log
hacker@memory~dereferencing-yourself:~$ cd dy/
hacker@memory~dereferencing-yourself:~/dy$ ls
hacker@memory~dereferencing-yourself:~/dy$ vim dy.s
hacker@memory~dereferencing-yourself:~/dy$ /challenge/check dy.s 

Checking the assembly code...
... YES! Great job!

Let's check what your exit code is! It should be our secret
value pointed to by rdi (value 87) to succeed!

hacker@memory~dereferencing-yourself:/home/hacker/dy$ /tmp/your-program
hacker@memory~dereferencing-yourself:/home/hacker/dy$ echo $?
87
hacker@memory~dereferencing-yourself:/home/hacker/dy$ 

Neat! Your program passed the tests! Great job!

Here is your flag!
pwn.college{s6IqqobqWueIEBEaxsbaujNuvZM.QXyMTO1wCN2gjNwEzW}

hacker@memory~dereferencing-yourself:~/dy$ 
---
```
#### 3.5. Dereferncing with Offsets
```bash
---offset.s
---
---log info
hacker@memory~dereferencing-with-offsets:~$ ls
COLLEGE  PWN   dy    instruction   myflag  rax-chall.s	t	  tmp
Desktop  core  ec.s  instructions  pwnc    rm		the-flag  win
hacker@memory~dereferencing-with-offsets:~$ ls
COLLEGE  PWN   dy    instruction   myflag  rax-chall.s	t	  tmp
Desktop  core  ec.s  instructions  pwnc    rm		the-flag  win
hacker@memory~dereferencing-with-offsets:~$ cd pwnc/
hacker@memory~dereferencing-with-offsets:~/pwnc$ ls
core  dp  mlp  rfm  rfm.o  rfm.s
hacker@memory~dereferencing-with-offsets:~/pwnc$ mkdir offet
hacker@memory~dereferencing-with-offsets:~/pwnc$ cd offet/
hacker@memory~dereferencing-with-offsets:~/pwnc/offet$ ls
hacker@memory~dereferencing-with-offsets:~/pwnc/offet$ vim offset.s
hacker@memory~dereferencing-with-offsets:~/pwnc/offet$ ls
offset.s
hacker@memory~dereferencing-with-offsets:~/pwnc/offet$ /challenge/check offset.s 

Checking the assembly code...
... oops, we found an issue! Details below:

You must set each of the following registers (using the mov instruction):
    rax, rdi
hacker@memory~dereferencing-with-offsets:~/pwnc/offet$ /challenge/check offset.s vim^C
hacker@memory~dereferencing-with-offsets:~/pwnc/offet$ ^C
hacker@memory~dereferencing-with-offsets:~/pwnc/offet$ vim offset.s 
hacker@memory~dereferencing-with-offsets:~/pwnc/offet$ /challenge/check offset.s 
This challenge expects 3 instructions, but you provided 2.
hacker@memory~dereferencing-with-offsets:~/pwnc/offet$ vim offset.s 
hacker@memory~dereferencing-with-offsets:~/pwnc/offet$ /challenge/check offset.s 

Checking the assembly code...
... YES! Great job!

Let's check what your exit code is! It should be our secret
value pointed to by rdi (value 64) to succeed!

hacker@memory~dereferencing-with-offsets:/home/hacker/pwnc/offet$ /tmp/your-program
hacker@memory~dereferencing-with-offsets:/home/hacker/pwnc/offet$ echo $?
64
hacker@memory~dereferencing-with-offsets:/home/hacker/pwnc/offet$ 

Neat! Your program passed the tests! Great job!

Here is your flag!
pwn.college{0qb21KsPoHUDRfiEKglVyxV9CnA.QX1QTO1wCN2gjNwEzW}

hacker@memory~dereferencing-with-offsets:~/pwnc/offet$ 
---
```