## Map
[Dojos](#dojos)
### Content
-   [1. Your First Program](#1-your-first-program)
-   [2. ](#)
-   [3. ](#)
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
```
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
```
using `as` to make executables file asembly
eg: as -o asm.o asm.s


```