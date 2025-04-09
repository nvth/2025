## Map
[Dojos](#dojos)
### Content
-   [1. Your First Program](#1-your-first-program)
-   [2. Software Introspection](#2-software-introspection)
-   [3. Computer Memory](#3-computer-memory)
-   [4. Hello hackers](#4-hello-hackers)
-   [5. Assembly crash course](#5-assembly-crash-course)
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
#### 3.6. Stored Address
```bash
hacker@memory~stored-addresses:~/pwnc/sa$ /challenge/check sa.s 

Checking the assembly code...
... YES! Great job!

Let's check what your exit code is! It should be our secret
value pointed to by a chain of pointers starting at address 20150781!

hacker@memory~stored-addresses:/home/hacker/pwnc/sa$ /tmp/your-program
hacker@memory~stored-addresses:/home/hacker/pwnc/sa$ echo $?
64
hacker@memory~stored-addresses:/home/hacker/pwnc/sa$ 

Neat! Your program passed the tests! Great job!

Here is your flag!
pwn.college{IE0qw86Mcpk1Twv5EVjHLTfMdiO.QXzMTO1wCN2gjNwEzW}

hacker@memory~stored-addresses:~/pwnc/sa$ cat sa.s 
mov rdi, [567800]
mov rdi, [rdi]
mov rax, 60
syscall
hacker@memory~stored-addresses:~/pwnc/sa$ 
```
#### 3.7. Double Dereference
```bash
hacker@memory~double-dereference:~/pwnc/dd$ /challenge/check dd.s 

Checking the assembly code...
... YES! Great job!

Let's check what your exit code is! It should be our secret
value pointed to by a chain of pointers starting at rax!

hacker@memory~double-dereference:/home/hacker/pwnc/dd$ /tmp/your-program
hacker@memory~double-dereference:/home/hacker/pwnc/dd$ echo $?
75
hacker@memory~double-dereference:/home/hacker/pwnc/dd$ 

Neat! Your program passed the tests! Great job!

Here is your flag!
pwn.college{EAhaLoMtAxPKbUdJXHy0wVxOhoP.QX0MTO1wCN2gjNwEzW}

hacker@memory~double-dereference:~/pwnc/dd$ cat dd.s 
mov rdi, [rax]   //mov rdi, [rax] get content from register rax 133700   
mov rdi, [rdi] //mov rdi, [rdi] get content from register rdi 123400   
mov rax, 60  // throw rdi using exit code
syscall
hacker@memory~double-dereference:~/pwnc/dd$ 
```
#### 3.8. Triple Dereference
```bash
hacker@memory~triple-dereference:~/pwnc/td$ /challenge/check td.s 

Checking the assembly code...
... YES! Great job!

Let's check what your exit code is! It should be our secret
value pointed to by a chain of pointers starting at rdi!

hacker@memory~triple-dereference:/home/hacker/pwnc/td$ /tmp/your-program
hacker@memory~triple-dereference:/home/hacker/pwnc/td$ echo $?
70
hacker@memory~triple-dereference:/home/hacker/pwnc/td$ 

Neat! Your program passed the tests! Great job!

Here is your flag!
pwn.college{g2wP08Fs5cDnD7yFDZYm_uCn95G.QXzQTO1wCN2gjNwEzW}

hacker@memory~triple-dereference:~/pwnc/td$ cat td.s 
mov rdi, [rdi]
mov rdi, [rdi]
mov rdi, [rdi]
mov rax, 60
syscall
hacker@memory~triple-dereference:~/pwnc/td$ 
```
### 4. Hello hackers
#### 4.1. Write Output
```bash
hacker@hello-hackers~writing-output:~/hellowhacker/writing$ /challenge/check wo.s 

Checking the assembly code...
... YES! Great job!

Let's check what your exit code is! It should be our secret value
stored at memory address 1337000 (the letter H) to succeed!

hacker@hello-hackers~writing-output:/home/hacker/hellowhacker/writing$ /tmp/your-program
HSegmentation fault (core dumped)
hacker@hello-hackers~writing-output:/home/hacker/hellowhacker/writing$ 


Wow, you wrote an "H"!!!!!!! But why did your program crash? Well, you didn't
exit, and as before, the CPU kept executing and eventually crashed. In the next
level, we will learn how to chain two system calls togeter: write and exit!


Here is your flag!
pwn.college{4LReGv0hyzZf6xnp_5tHfkGRlRh.QXwUTN2wCN2gjNwEzW}

hacker@hello-hackers~writing-output:~/hellowhacker/writing$ 


cat
mov rsi, 1337000
mov rdi, 1
mov rdi, 1
mov rax, 1
syscall
```
#### 4.2. Chaining Syscalls
```bash
hacker@hello-hackers~chaining-syscalls:~/pwnc/cs$ /challenge/check csv.s 

Checking the assembly code...
... YES! Great job!

Let's check what your exit code is! It should be our secret value
stored at memory address 1337000 (the letter H) to succeed!

hacker@hello-hackers~chaining-syscalls:/home/hacker/pwnc/cs$ /tmp/your-program
Hhacker@hello-hackers~chaining-syscalls:/home/hacker/pwnc/cs$ 

YES! You wrote an 'H' and cleanly exited! Great job!

Here is your flag!
pwn.college{k_42Vvvr8pXfm5MVo7DOt-08oRw.QXxUTN2wCN2gjNwEzW}

hacker@hello-hackers~chaining-syscalls:~/pwnc/cs$ cat csv.s 
mov rax, 1  ; syscall write (rdi, rsi, rdx)
mov rdi, 1  ; set rdi = 1 (FD - 0/1/2)
mov rsi, 1337000    ; set rsi = 1337000 (address secret value)
mov rdx, 1  ;   set rdx = 1 (character byte)
syscall ;   syscall

mov rax, 60 ;   set rax = 60 (exit code)
mov rdi, 42 ;   set rdi = 42 (exit code )
syscall ;   syscall
hacker@hello-hackers~chaining-syscalls:~/pwnc/cs$ 
```
#### 4.3. Writing Strings
```bash
hacker@hello-hackers~writing-strings:~/pwnc/ws$ /challenge/check ws.s 

Checking the assembly code...
... YES! Great job!

Let's check what your exit code is! It should be our secret value
stored at memory address 1337000 (the string "Hello Hackers!" ) to succeed!

hacker@hello-hackers~writing-strings:/home/hacker/pwnc/ws$ /tmp/your-program
Hello Hackers!hacker@hello-hackers~writing-strings:/home/hacker/pwnc/ws$ 

YES! You wrote a "Hello Hackers" and cleanly exited! Great job!

Here is your flag!
pwn.college{QVmlTK9KA_uN9bc57iyTUAj4zaN.01NzEDMxwCN2gjNwEzW}

hacker@hello-hackers~writing-strings:~/pwnc/ws$ cat ws.s 
mov rax, 1  ;   call sys write
mov rdi, 1  ;   set FD = 1
mov rsi, 1337000    ;   set address = 1337000
mov rdx, 14 ;   set length char 14
syscall
mov rax, 60 ; exitcode
mov rdi, 42 ; exit code
syscall
hacker@hello-hackers~writing-strings:~/pwnc/ws$ 
```
#### 4.4. ReaDING dATa
```bash
hacker@hello-hackers~reading-data:~/pwnc/rd$ /challenge/check rd.s 

Checking the assembly code...
... YES! Great job!

Let's check what your output is! It should be our secret value, b'ItcyaOGp',
as passed into the stdin of your program!

hacker@hello-hackers~reading-data:/home/hacker/pwnc/rd$ /tmp/your-program
ItcyaOGp
hacker@hello-hackers~reading-data:/home/hacker/pwnc/rd$ 

YES! You wrote the data and cleanly exited! Great job!

Here is your flag!
pwn.college{8FckmaMMUgolNRXn8lPleXcwB7p.0FNwUTNxwCN2gjNwEzW}

hacker@hello-hackers~reading-data:~/pwnc/rd$ cat rd.s 
mov rax, 0  ;   call sys_read
mov rdi, 0  ;   set fd = 0 (stdin)
mov rsi, 1337000    ;   set addr 1337000
mov rdx, 8  ;   set rdx = 8 byte
syscall

mov rax, 1 ; call sys_write
mov rdi, 1  ;   set fd = 1 (stout)
mov rsi, rsi    ;   set addr = rsi sys_read
mov rdx, rdx    ;   set lenght = rdx sys_read
syscall

mov rax, 60
mov rdi, 42
syscall
hacker@hello-hackers~reading-data:~/pwnc/rd$ 
```
### 5. Assembly Crash course
#### 5.1. set-register
```bash
hacker@assembly-crash-course~set-register:~/pwnc/acc/set-r$ /challenge/run sr

In this level you will be working with registers. You will be asked to modify
or read from registers.


In this level you will work with registers! Please set the following:
  rdi = 0x1337

Extracting binary code from provided ELF file...
Did not find any GOT entries
Executing your code...
---------------- CODE ----------------
0x400000:	mov   	rdi, 0x1337
0x400007:	mov   	rax, 0x3c
0x40000e:	syscall	
--------------------------------------
pwn.college{AcBTw-OVkx0eI_1MiiGXzFmkrHT.dRTOxwCN2gjNwEzW}

hacker@assembly-crash-course~set-register:~/pwnc/acc/set-r$ cat sr.s
.intel_syntax noprefix  ;   intel syntax
.global _start  ;   start var
_start:
mov rdi, 0x1337    ;    set rdi  = 0x1337
mov rax, 60 ;   set rax exit code
syscall
hacker@assembly-crash-course~set-register:~/pwnc/acc/set-r$ 
```
#### 5.2. set-multiple-register
```bash
hacker@assembly-crash-course~set-multiple-registers:~/pwnc/acc/smr$ as -o smr smr.s 
hacker@assembly-crash-course~set-multiple-registers:~/pwnc/acc/smr$ /challenge/run smr

In this level you will be working with registers. You will be asked to modify
or read from registers.


In this level you will work with multiple registers. Please set the following:
  rax = 0x1337
  r12 = 0xCAFED00D1337BEEF
  rsp = 0x31337

Extracting binary code from provided ELF file...
Did not find any GOT entries
Executing your code...
---------------- CODE ----------------
0x400000:	mov   	rax, 0x1337
0x400007:	movabs	r12, 0xcafed00d1337beef
0x400011:	mov   	rsp, 0x31337
--------------------------------------
pwn.college{MugCAeP4_iDhFeAV-5OGOI1Oc_s.QXwEDOzwCN2gjNwEzW}

hacker@assembly-crash-course~set-multiple-registers:~/pwnc/acc/smr$ cat smr.s 
.intel_syntax noprefix
.global _start
_start:
mov rax, 0x1337
mov r12, 0xCAFED00D1337BEEF
mov rsp, 0x31337

hacker@assembly-crash-course~set-multiple-registers:~/pwnc/acc/smr$ 
```
#### 5.3. add-to-register
```bash
acker@assembly-crash-course~add-to-register:~/pwnc/add-to-r$ vim atr.s 
hacker@assembly-crash-course~add-to-register:~/pwnc/add-to-r$ as -o atr.o atr.s
hacker@assembly-crash-course~add-to-register:~/pwnc/add-to-r$ /challenge/run atr.o 

In this level you will be working with registers. You will be asked to modify
or read from registers.

We will now set some values in memory dynamically before each run. On each run
the values will change. This means you will need to do some type of formulaic
operation with registers. We will tell you which registers are set beforehand
and where you should put the result. In most cases, its rax.


Many instructions exist in x86 that allow you to do all the normal
math operations on registers and memory.

For shorthand, when we say A += B, it really means A = A + B.

Here are some useful instructions:
  add reg1, reg2       <=>     reg1 += reg2
  sub reg1, reg2       <=>     reg1 -= reg2
  imul reg1, reg2      <=>     reg1 *= reg2

div is more complicated and we will discuss it later.
Note: all 'regX' can be replaced by a constant or memory location

Do the following:
  add 0x331337 to rdi

We will now set the following in preparation for your code:
  rdi = 0x92b

Extracting binary code from provided ELF file...
Did not find any GOT entries
Executing your code...
---------------- CODE ----------------
0x400000:	add   	rdi, 0x331337
--------------------------------------
pwn.college{U4ofZa_-dZQYK0J-o2mNWbQPd5N.dVTOxwCN2gjNwEzW}

hacker@assembly-crash-course~add-to-register:~/pwnc/add-to-r$ cat atr.s 
.intel_syntax noprefix
.global _start
_start:
add rdi, 0x331337
hacker@assembly-crash-course~add-to-register:~/pwnc/add-to-r$ 
```
#### 5.4. linear-equation-registers
```bash
hacker@assembly-crash-course~linear-equation-registers:~/pwnc/ler$ python3 ler.py 
[+] Starting local process '/challenge/run': pid 427
[+] Receiving all data: Done (1.30KB)
[*] Process '/challenge/run' stopped with exit code 0 (pid 427)
[+] Receiving all data: Done (0B)
b''hacker@assembly-crash-course~linear-equation-registers:~/pwnc/ler$ vim ler.py
hacker@assembly-crash-course~linear-equation-registers:~/pwnc/ler$ python3 ler.py 
[+] Starting local process '/challenge/run': pid 449
[+] Receiving all data: Done (1.30KB)
[*] Process '/challenge/run' stopped with exit code 0 (pid 449)
In this level you will be working with registers. You will be asked to modify
or read from registers.

We will now set some values in memory dynamically before each run. On each run
the values will change. This means you will need to do some type of formulaic
operation with registers. We will tell you which registers are set beforehand
and where you should put the result. In most cases, its rax.


Using your new knowledge, please compute the following:
  f(x) = mx + b, where:
    m = rdi
    x = rsi
    b = rdx

Place the result into rax.

Note: there is an important difference between mul (unsigned
multiply) and imul (signed multiply) in terms of which
registers are used. Look at the documentation on these
instructions to see the difference.

In this case, you will want to use imul.

We will now set the following in preparation for your code:
  rdi = 0x1321
  rsi = 0x26ce
  rdx = 0x6d8

You ran me without an argument. You can re-run with `/challenge/run /path/to/your/elf` to input an ELF file, or just give me your assembled and extracted code in bytes (up to 0x1000 bytes): 
Executing your code...
---------------- CODE ----------------
0x400000:	imul  	rdi, rsi
0x400004:	add   	rdi, rdx
0x400007:	mov   	rax, rdi
--------------------------------------
pwn.college{AOnejllgU1MRydSk4MyCkWbzpg4.dZTOxwCN2gjNwEzW}
hacker@assembly-crash-course~linear-equation-registers:~/pwnc/ler$ cat ler.py 
from pwn import *
context.update(arch='amd64')
code = asm("""
imul rdi, rsi
add rdi, rdx
mov rax, rdi
""")
p = process('/challenge/run')
p.write(code)

output = p.readall()
clean_output = output.decode().strip()
print(clean_output, end='')

p.close()

hacker@assembly-crash-course~linear-equation-registers:~/pwnc/ler$ 

```
#### 5.5. integer-division
```bash
hacker@assembly-crash-course~integer-division:~/pwnc/id$ vim id.py
hacker@assembly-crash-course~integer-division:~/pwnc/id$ python3 id.py 
[+] Starting local process '/challenge/run': pid 394
[+] Receiving all data: Done (1.97KB)
[*] Process '/challenge/run' stopped with exit code 0 (pid 394)
In this level you will be working with registers. You will be asked to modify
or read from registers.

We will now set some values in memory dynamically before each run. On each run
the values will change. This means you will need to do some type of formulaic
operation with registers. We will tell you which registers are set beforehand
and where you should put the result. In most cases, its rax.


Division in x86 is more special than in normal math. Math in here is
called integer math. This means every value is a whole number.

As an example: 10 / 3 = 3 in integer math.

Why?

Because 3.33 is rounded down to an integer.

The relevant instructions for this level are:
  mov rax, reg1; div reg2

Note: div is a special instruction that can divide
a 128-bit dividend by a 64-bit divisor, while
storing both the quotient and the remainder, using only one register as an operand.

How does this complex div instruction work and operate on a
128-bit dividend (which is twice as large as a register)?

For the instruction: div reg, the following happens:
  rax = rdx:rax / reg
  rdx = remainder

rdx:rax means that rdx will be the upper 64-bits of
the 128-bit dividend and rax will be the lower 64-bits of the
128-bit dividend.

You must be careful about what is in rdx and rax before you call div.

Please compute the following:
  speed = distance / time, where:
    distance = rdi
    time = rsi
    speed = rax

Note that distance will be at most a 64-bit value, so rdx should be 0 when dividing.

We will now set the following in preparation for your code:
  rdi = 0x1230
  rsi = 0x2a

You ran me without an argument. You can re-run with `/challenge/run /path/to/your/elf` to input an ELF file, or just give me your assembled and extracted code in bytes (up to 0x1000 bytes): 
Executing your code...
---------------- CODE ----------------
0x400000:	mov   	rax, rdi
0x400003:	div   	rsi
0x400006:	mov   	rdx, rax
--------------------------------------
pwn.college{Y2KBhnCu8DDM-XbVzDi8Zrtf6fO.ddTOxwCN2gjNwEzW}
hacker@assembly-crash-course~integer-division:~/pwnc/id$ 
```
#### 5.6. module-operation
```bash
hacker@assembly-crash-course~modulo-operation:~/pwnc/mod$ python3 mod.py 
[+] Starting local process '/challenge/run': pid 372
[+] Receiving all data: Done (1.25KB)
[*] Process '/challenge/run' stopped with exit code 0 (pid 372)
In this level you will be working with registers. You will be asked to modify
or read from registers.

We will now set some values in memory dynamically before each run. On each run
the values will change. This means you will need to do some type of formulaic
operation with registers. We will tell you which registers are set beforehand
and where you should put the result. In most cases, its rax.


Modulo in assembly is another interesting concept!

x86 allows you to get the remainder after a div operation.

For instance: 10 / 3 -> remainder = 1

The remainder is the same as modulo, which is also called the "mod" operator.

In most programming languages we refer to mod with the symbol '%'.

Please compute the following:
  rdi % rsi

Place the value in rax.

We will now set the following in preparation for your code:
  rdi = 0x34bd603c
  rsi = 0x3

You ran me without an argument. You can re-run with `/challenge/run /path/to/your/elf` to input an ELF file, or just give me your assembled and extracted code in bytes (up to 0x1000 bytes): 
Executing your code...
---------------- CODE ----------------
0x400000:	mov   	rax, rdi
0x400003:	div   	rsi
0x400006:	mov   	rax, rdx
--------------------------------------
pwn.college{IXZM-iBG5OhEcnSkvTq8eqMqb47.dhTOxwCN2gjNwEzW}
hacker@assembly-crash-course~modulo-operation:~/pwnc/mod$ 
```
#### 5.7. set-upper-byte
```bash
Using only one move instruction, please set the upper 8 bits of the ax register to 0x42.

ax = ah + al
==> 8 bits upper is ah

logfile

hacker@assembly-crash-course~set-upper-byte:~/pwnc$ python3 sub.py
[+] Starting local process '/challenge/run': pid 380
[+] Receiving all data: Done (1.84KB)
[*] Process '/challenge/run' stopped with exit code 0 (pid 380)
In this level you will be working with registers. You will be asked to modify
or read from registers.

We will now set some values in memory dynamically before each run. On each run
the values will change. This means you will need to do some type of formulaic
operation with registers. We will tell you which registers are set beforehand
and where you should put the result. In most cases, its rax.


Another cool concept in x86 is the ability to independently access to lower register bytes.

Each register in x86_64 is 64 bits in size, and in the previous levels we have accessed
the full register using rax, rdi or rsi.

We can also access the lower bytes of each register using different register names.

For example the lower 32 bits of rax can be accessed using eax, the lower 16 bits using ax,
the lower 8 bits using al.

MSB                                    LSB
+----------------------------------------+
|                   rax                  |
+--------------------+-------------------+
                     |        eax        |
                     +---------+---------+
                               |   ax    |
                               +----+----+
                               | ah | al |
                               +----+----+

Lower register bytes access is applicable to almost all registers.

Using only one move instruction, please set the upper 8 bits of the ax register to 0x42.

We will now set the following in preparation for your code:
  rax = 0xdda09a77c81a008d

You ran me without an argument. You can re-run with `/challenge/run /path/to/your/elf` to input an ELF file, or just give me your assembled and extracted code in bytes (up to 0x1000 bytes): 
Executing your code...
---------------- CODE ----------------
0x400000:	mov   	ah, 0x42
--------------------------------------
pwn.college{sLNIxACRPnF-v7RYifSXHgFuhFT.QXxEDOzwCN2gjNwEzW}

hacker@assembly-crash-course~set-upper-byte:~/pwnc$ cat sub.py
from pwn import *


context.update(arch='amd64') #amd64 syntax
code = asm("""
mov ah, 0x42
""")
p = process('/challenge/run')
p.write(code)

output = p.readall()
clean_output = output.decode().strip()
print(clean_output, end='')

p.close()
hacker@assembly-crash-course~set-upper-byte:~/pwnc$ 
```
#### 5.8. effication-modulo
