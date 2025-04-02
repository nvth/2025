## Map
[Dojos](#dojos)
### Content
-   [1. Hello hacker](#1-hello-hacker)
-   [2. Pondering paths](#2-pondering-paths)
-   [3. Comprehending Commands](#3-comprehending-commands)
-   [4. Disgesting Documentation](#4-digesting-documentation)
-   [5. File Globbing](#5-file-globbing)
-   [6. Practicing Piping](#6-practicing-piping)
-   [7. Shell variable](#7-shell-variable)
-   [8. Process and jobs](#8-process-and-jobs)
-   [9. Perceiving permissions](#9-perceiving-permissions)
-   [10. Untangling user](#10-untangling-users)
-   [11. Chaining commands](#11-chaining-commands)
-   [12. Pondering Paths](#12-pondering-paths)
## Dojos

### 1. Hello hacker
...
### 2. Pondering paths
#### 2.1. The roots 
pwn.college{oA0HPZ6xjgd3e5Iu5R3Rw1e-UPy.QX4cTO0wCN2gjNwEzW}
#### 2.2. Program and absolute paths
pwn.college{0skAfAXWgPBWU_3z2JObC7M2BCL.QX1QTN0wCN2gjNwEzW}
#### 2.3. Position thy self
cd `usr/bin/`  and run `challenge/run`

pwn.college{0vMsAXuoe0tk74ZLKO7ThTF6Eu9.QX2QTN0wCN2gjNwEzW}
#### 2.4. Position elsewhere
cd `/var/lib/apt/lists` run `challenge/run`
pwn.college{w8CH41HVHSiAqlgNaPvmAoTSXtj.QX3QTN0wCN2gjNwEzW}
#### 2.5. Possition yet elsewhere
...
#### 2.6. Implicit relative paths
pwn.college{AzPXwwvH-XGFRdEth6HsVNqCQBr.QX5QTN0wCN2gjNwEzW}

Imagine we want to access some file located at /tmp/a/b/my_file.

If my cwd is /, then a relative path to the file is tmp/a/b/my_file.

If my cwd is /tmp, then a relative path to the file is a/b/my_file.

If my cwd is /tmp/a/b/c, then a relative path to the file is ../my_file. The .. refers to the parent directory.

`relitive path not start with /`
#### 2.7. Explicit relative paths
...
#### 2.8. Home sweet home
/challenge/run ~/t
### 3. Comprehending Commands
#### 3.1. Cat not the pet but the command
---
#### 3.2. Catting abs path
pwn.college{QqjAvWJTn5Sl6gyHq3Ga9ROLZHi.QX5ETO0wCN2gjNwEzW}
#### 3.3. More catting practice
---
#### 3.4. Grepping for a needle in a haystack
grep pwn /challenge/data.txt
#### 3.5. Listing file
pwn.college{44AZMhdFon0GT359m7UXNbQUJBF.QX4IDO0wCN2gjNwEzW}
#### 3.6. Touching files

#### 3.7. Removing files

#### 3.8. Hidden files

#### 3.9. An epic filesystem quest
```t
head over : /
next step : cat REVGELATION  | got next clue information path - get in this path
next step in : cat NUGGET | got next clue information path - get in this path
next step in : cat .MEMO | got next clue information path - get in this path
next step in : cat TEASEAR | got next clue information path - get in this path
next step in : cat CUE | got next clue information path but dont get in, it's maybe a trap and self detruction
next step in : cat /usr/lib/python3/dist-packages/future/DOSSIER-TRAPPED | got next clue, dont read with cd
next step in : cat /usr/share/racket/pkgs/future-visualizer-typed/ALERT-TRAPPED | got next clue, dont read with cd
next and next and found the flag at GIST-TRAPPED file : pwn.college{kTMCQHhjVkQ4y0XVI5dUTwa2iAR.QX5IDO0wCN2gjNwEzW} 
```
#### 3.10. Making directory
pwn.college{IalsTR9-2IVoR9ZJ9TvNgsmp2hk.QXxMDO0wCN2gjNwEzW}
#### 3.11. Finding file
find / -name flag

pwn.college{wtJGt1erDsSHLDdE5jHTNU7dYtE.QXyMDO0wCN2gjNwEzW}
#### 3.12. Linking file
```cmd
open catfalg - catflag will read flag from not-the-flag file 
hacker@commands~linking-files:~$ cat /challenge/catflag
#!/opt/pwn.college/bash

fold -s <<< "About to read out the /home/hacker/not-the-flag file!"
cat /home/hacker/not-the-flag
/flag not perm to read but we can symlink /flag to /not-the-flag and read not-the-flag using /challenge/catflag

acker@commands~linking-files:/$ ln -sf /flag /home/hacker/not-the-flag
hacker@commands~linking-files:/$ /challenge/catflag 
About to read out the /home/hacker/not-the-flag file!
pwn.college{4JqlS7E6bDumaf7DF2mD8reZxWp.QX5ETN1wCN2gjNwEzW}
hacker@commands~linking-files:/$ 
```
### 4. Digesting Documentation
#### 4.1. Leaning from documentation
pwn.college{0oeD-6gomseDgFbZ_uxLhU2WZ8G.QX0ITO0wCN2gjNwEzW}
#### 4.2. Learning complex usage
```
using `find / -name flag` to find flag


hacker@man~learning-complex-usage:~$ /challenge/challenge --printfile /flag 
Correct argument! Here is the /flag file:
pwn.college{IMsEqZscCeJEnXD4W7EFX5NFOXW.QX1ITO0wCN2gjNwEzW}
hacker@man~learning-complex-usage:~$ 
```
#### 4.3. Reading manuals
```
hacker@man~reading-manuals:/$ challenge/challenge --wwbitf 060
Correct usage! Your flag: pwn.college{0wwJ60YFb9itf_9ikN6E25bvnrW.QX0EDO0wCN2gjNwEzW}
hacker@man~reading-manuals:/$ 
```
#### 4.4. Searching manuals
```
hacker@man~searching-manuals:/challenge$ /challenge/challenge --vdk
Initializing...
Correct usage! Your flag: pwn.college{EUz1DhK-nbhmFimPVEaHnEVDIdF.QX1EDO0wCN2gjNwEzW}
hacker@man~searching-manuals:/challenge$ 
```
#### 4.5. Searching for manuals
```
using man -k . | grep flag to print all manpage in system  | grep flag to searching manpage which is include flag
-------------------
hacker@man~searching-for-manuals:/challenge$ man -k . | grep flag
wyiuyuazvt (1)       - print the flag!
dpkg-buildflags (1)  - returns build flags to use during package build
Dpkg::BuildFlags (3perl) - query build flags
fegetexceptflag (3)  - floating-point rounding and exception handling
fesetexceptflag (3)  - floating-point rounding and exception handling
ioctl_iflags (2)     - ioctl() operations for inode flags
pcap-config (1)      - write libpcap compiler and linker flags to standard ou...
security_compute_av_flags (3) - query the SELinux policy database in the kernel
security_compute_av_flags_raw (3) - query the SELinux policy database in the ...
set_matchpathcon_flags (3) - set flags controlling the operation of matchpath...
set_matchpathcon_invalidcon (3) - set flags controlling the operation of matc...
set_matchpathcon_printf (3) - set flags controlling the operation of matchpat...
hacker@man~searching-for-manuals:/challenge$ 
-------------------

man wyiuyuazvt
-------------------
NAME
       /challenge/challenge - print the flag!

SYNOPSIS
       challenge OPTION

DESCRIPTION
       Output the flag when called with the right arguments.

       --fortune
              read a fortune

       --version
              output version information and exit

       --wyiuyu NUM
              print the flag if NUM is 236
---------------------

flag
---------------------
hacker@man~searching-for-manuals:~$ /challenge/challenge --wyiuyu 236
Correct usage! Your flag: pwn.college{wyiEJu2Sy-ua3J6ZQzLvV0tu_k3.QX2EDO0wCN2gjNwEzW}
hacker@man~searching-for-manuals:~$ 
```
#### 4.6. Helpful Programs
```


hacker@man~helpful-programs:~$ /challenge/challenge -p
The secret value is: 736
hacker@man~helpful-programs:~$ /challenge/challenge -g GIVE_THE_FLAG 736
usage: a challenge to make you ask for help [-h] [--fortune] [-v]
                                            [-g GIVE_THE_FLAG] [-p]
a challenge to make you ask for help: error: argument -g/--give-the-flag: invalid int value: 'GIVE_THE_FLAG'
hacker@man~helpful-programs:~$ /challenge/challenge -g 736
Correct usage! Your flag: pwn.college{EqawB_NQno7Hy3PiV6DsOdUjhtn.QX3IDO0wCN2gjNwEzW}
hacker@man~helpful-programs:~$ 
```
#### 4.7. Help for builtin
```
hacker@man~help-for-builtins:/challenge$ help challenge
challenge: challenge [--fortune] [--version] [--secret SECRET]
    This builtin command will read you the flag, given the right arguments!
    
    Options:
      --fortune		display a fortune
      --version		display the version
      --secret VALUE	prints the flag, if VALUE is correct

    You must be sure to provide the right value to --secret. That value
    is "UI7K0_--".
hacker@man~help-for-builtins:/challenge$ challenge --secret UI7K0_--
Correct! Here is your flag!
pwn.college{UI7K0_--R4JiPueZs_CeOvIrVYk.QX0ETO0wCN2gjNwEzW}

hacker@man~help-for-builtins:/challenge$ 
```
### 5. File Globbing
#### 5.1. Matching with star
```
let try somepayload 

hacker@globbing~matching-with-:~$ cd /*/c
-bash: cd: /*/c: No such file or directory
hacker@globbing~matching-with-:~$ cd /c***
You specified the path to 'cd' to in more than 4 characters. Disallowed!
hacker@globbing~matching-with-:~$ cd /c**
hacker@globbing~matching-with-:/challenge$ ./run
You ran me with the working directory of /challenge! Here is your flag:
pwn.college{YQ74smLdLD2SjdepXkY967NIjGp.QXxIDO0wCN2gjNwEzW}
hacker@globbing~matching-with-:/challenge$ 
```
#### 5.2. Matching with question-mark
```
We cannot using c , l , *

hacker@globbing~matching-with-:~$ cd /?ha??enge
hacker@globbing~matching-with-:/challenge$ ./run
You ran me with the working directory of /challenge! Here is your flag:
pwn.college{k7yVoTPUgkeL_uAMwAC3TPTurTs.QXyIDO0wCN2gjNwEzW}
hacker@globbing~matching-with-:/challenge$ 
```
#### 5.3. Matching with square-brackets
```
hacker@globbing~matching-with-:~$ cd /challenge/
hacker@globbing~matching-with-:/challenge$ cd files/
hacker@globbing~matching-with-:/challenge/files$ ./run file_[absh]
-bash: ./run: No such file or directory
hacker@globbing~matching-with-:/challenge/files$ /challenge/run file_[absh]
You got it! Here is your flag!
pwn.college{k63gBJ1Zs499smTKqvSyYe6dLuc.QXzIDO0wCN2gjNwEzW}
hacker@globbing~matching-with-:/challenge/files$ 
```
#### 5.4. Matching path with square-brackets
```
hacker@globbing~matching-paths-with-:~$ /challenge/run file_[absh]
Error: you will need to specify the path to the files as part of your glob 
argument, since they are in a different directory than your current working 
directory!
hacker@globbing~matching-paths-with-:~$ /challenge/run /home/hacker/challenge/files/file_[absh]
Your expansion did not expand to the requested files (/challenge/files/file_b, 
/challenge/files/file_a, /challenge/files/file_s, and /challenge/files/file_h). 
Instead, it expanded to:
/home/hacker/challenge/files/file_[absh]
hacker@globbing~matching-paths-with-:~$ /challenge/run /challenge/files/file_[absh]
You got it! Here is your flag!
pwn.college{UVNeLVi1XpYco4KfATinq9rUEYQ.QX0IDO0wCN2gjNwEzW}
hacker@globbing~matching-paths-with-:~$ 
```
#### 5.5. Mixing glob
```
hacker@globbing~mixing-globs:/challenge/files$ /challenge/run [ecp]*
You got it! Here is your flag!
pwn.college{EbpPNL7aLnoIPU14KO_FwztBKfV.QX1IDO0wCN2gjNwEzW}
hacker@globbing~mixing-globs:/challenge/files$ 
```
#### 5.6. Exclutionary glob
```
hacker@globbing~exclusionary-globbing:/challenge/files$ /challenge/run [!pwn]*
You got it! Here is your flag!
pwn.college{8cbECxqI6yWO-JOtM0G0M2zf3wr.QX2IDO0wCN2gjNwEzW}
hacker@globbing~exclusionary-globbing:/challenge/files$ 
```
### 6. Practicing piping
#### 6.1. Redirecting output
```
hacker@piping~redirecting-output:~$ echo PWN > COLLEGE
Correct! You successfully redirected 'PWN' to the file 'COLLEGE'! Here is your 
flag:
pwn.college{gb5OTMbYlES2PkLYhqx3tpDK_Rv.QX0YTN0wCN2gjNwEzW}
hacker@piping~redirecting-output:~$ 
```
#### 6.2. Redirecting more output
```
hacker@piping~redirecting-more-output:~$ /challenge/run > myflag
[INFO] WELCOME! This challenge makes the following asks of you:
[INFO] - the challenge will check that output is redirected to a specific file path : myflag
[INFO] - the challenge will output a reward file if all the tests pass : /flag

[HYPE] ONWARDS TO GREATNESS!

[INFO] This challenge will perform a bunch of checks.
[INFO] If you pass these checks, you will receive the /flag file.

[TEST] You should have redirected my stdout to a file called myflag. Checking...

[PASS] The file at the other end of my stdout looks okay!
[PASS] Success! You have satisfied all execution requirements.
hacker@piping~redirecting-more-output:~$ ls
COLLEGE  Desktop  leap	myflag	not-the-flag  t
hacker@piping~redirecting-more-output:~$ cat myflag 

[FLAG] Here is your flag:
[FLAG] pwn.college{oBZdGbfGuiB1_SLn4EGlS3CxDWY.QX1YTN0wCN2gjNwEzW}

hacker@piping~redirecting-more-output:~$ 
```
#### 6.3. Appending output
```
hacker@piping~appending-output:~$ ls
COLLEGE  Desktop  leap	myflag	not-the-flag  t
hacker@piping~appending-output:~$ /challenge/run >> /home/hacker/the-flag
[INFO] WELCOME! This challenge makes the following asks of you:
[INFO] - the challenge will check that output is redirected to a specific file path : /home/hacker/the-flag

[HYPE] ONWARDS TO GREATNESS!

[INFO] This challenge will perform a bunch of checks.
[INFO] Good luck!

[TEST] You should have redirected my stdout to a file called /home/hacker/the-flag. Checking...

[HINT] File descriptors are inherited from the parent, unless the FD_CLOEXEC is set by the parent on the file descriptor.
[HINT] For security reasons, some programs, such as python, do this by default in certain cases. Be careful if you are
[HINT] creating and trying to pass in FDs in python.

[PASS] The file at the other end of my stdout looks okay!
[PASS] Success! You have satisfied all execution requirements.
I will write the flag in two parts to the file /home/hacker/the-flag! I'll do 
the first write directly to the file, and the second write, I'll do to stdout 
(if it's pointing at the file). If you redirect the output in append mode, the 
second write will append to (rather than overwrite) the first write, and you'll 
get the whole flag!
hacker@piping~appending-output:~$ cat the-flag 
 | 
\|/ This is the first half:
 v 
pwn.college{USkHUueF8awtNDcqIN2G7GGuA3M.QX3ATO0wCN2gjNwEzW}
                              ^
     that is the second half /|\
                              |

If you only see the second half above, you redirected in *truncate* mode (>) 
rather than *append* mode (>>), and so the write of the second half to stdout 
overwrote the initial write of the first half directly to the file. Try append 
mode!
hacker@piping~appending-output:~$ 
```
#### 6.4. Redirecting errors
```cmd
FD 0: Standard Input
FD 1: Standard Output
FD 2: Standard Error

logging
hacker@piping~redirecting-errors:~$ ls
COLLEGE  Desktop  leap	myflag	not-the-flag  t  the-flag
hacker@piping~redirecting-errors:~$ /challenge/run 2> myflag
hacker@piping~redirecting-errors:~$ cat myflag 
[INFO] WELCOME! This challenge makes the following asks of you:
[INFO] - the challenge will check that output is redirected to a specific file path : myflag
[INFO] - the challenge will check that error output is redirected to a specific file path : instructions
[INFO] - the challenge will output a reward file if all the tests pass : /flag

[HYPE] ONWARDS TO GREATNESS!

[INFO] This challenge will perform a bunch of checks.
[INFO] If you pass these checks, you will receive the /flag file.

[TEST] You should have redirected my stdout to a file called myflag. Checking...

[FAIL] You did not satisfy all the execution requirements.
[FAIL] Specifically, you must fix the following issue:
[FAIL]   You have not redirected anything for this process' stdout.
hacker@piping~redirecting-errors:~$ /challenge/run > myflag
[INFO] WELCOME! This challenge makes the following asks of you:
[INFO] - the challenge will check that output is redirected to a specific file path : myflag
[INFO] - the challenge will check that error output is redirected to a specific file path : instructions
[INFO] - the challenge will output a reward file if all the tests pass : /flag

[HYPE] ONWARDS TO GREATNESS!

[INFO] This challenge will perform a bunch of checks.
[INFO] If you pass these checks, you will receive the /flag file.

[TEST] You should have redirected my stdout to a file called myflag. Checking...

[PASS] The file at the other end of my stdout looks okay!

[TEST] You should have redirected my stderr to instructions. Checking...

[FAIL] You did not satisfy all the execution requirements.
[FAIL] Specifically, you must fix the following issue:
[FAIL]   You have not redirected anything for this process' stderr.
hacker@piping~redirecting-errors:~$ /challenge/run 2> instruction
hacker@piping~redirecting-errors:~$ /challenge/run 2> instructions
hacker@piping~redirecting-errors:~$ /challenge/run > myflag
[INFO] WELCOME! This challenge makes the following asks of you:
[INFO] - the challenge will check that output is redirected to a specific file path : myflag
[INFO] - the challenge will check that error output is redirected to a specific file path : instructions
[INFO] - the challenge will output a reward file if all the tests pass : /flag

[HYPE] ONWARDS TO GREATNESS!

[INFO] This challenge will perform a bunch of checks.
[INFO] If you pass these checks, you will receive the /flag file.

[TEST] You should have redirected my stdout to a file called myflag. Checking...

[PASS] The file at the other end of my stdout looks okay!

[TEST] You should have redirected my stderr to instructions. Checking...

[FAIL] You did not satisfy all the execution requirements.
[FAIL] Specifically, you must fix the following issue:
[FAIL]   You have not redirected anything for this process' stderr.
hacker@piping~redirecting-errors:~$ cat myflag 
hacker@piping~redirecting-errors:~$ /challenge/run > myflag 2> instructions
hacker@piping~redirecting-errors:~$ cat myflag 

[FLAG] Here is your flag:
[FLAG] pwn.college{MSnKbmcNyx8PxoZ3M2-nO1MG4ik.QX3YTN0wCN2gjNwEzW}

hacker@piping~redirecting-errors:~$ cat instruction
[INFO] WELCOME! This challenge makes the following asks of you:
[INFO] - the challenge will check that output is redirected to a specific file path : myflag
[INFO] - the challenge will check that error output is redirected to a specific file path : instructions
[INFO] - the challenge will output a reward file if all the tests pass : /flag

[HYPE] ONWARDS TO GREATNESS!

[INFO] This challenge will perform a bunch of checks.
[INFO] If you pass these checks, you will receive the /flag file.

[TEST] You should have redirected my stdout to a file called myflag. Checking...

[FAIL] You did not satisfy all the execution requirements.
[FAIL] Specifically, you must fix the following issue:
[FAIL]   You have not redirected anything for this process' stdout.
hacker@piping~redirecting-errors:~$ 
```
#### 6.5. Redirect input
```
hacker@piping~redirecting-input:~$ /challenge/run < PWN
Reading from standard input...
Your PWN file must have the value 'COLLEGE', but I instead read: PWN
hacker@piping~redirecting-input:~$ echo COLLEGE > PWN
hacker@piping~redirecting-input:~$ /challenge/run < PWN
Reading from standard input...
Correct! You have redirected the PWN file into my standard input, and I read 
the value 'COLLEGE' out of it!
Here is your flag:
pwn.college{EWn4ApM8fyJ1Lq-MIKQWHg2dbja.QXwcTN0wCN2gjNwEzW}
hacker@piping~redirecting-input:~$ 
```
#### 6.6. Grepping stored results
---
#### 6.7. Grepping live output
---
### 7. Shell variable
#### 7.1. Printing variable
```
hacker@variables~printing-variables:~$ echo $FLAG
pwn.college{ANyaZLaNjht-TZTdoCmPvQnjQ2i.QX3UTN0wCN2gjNwEzW}
hacker@variables~printing-variables:~$ 
```
#### 7.2. Setting variable
```
hacker@variables~setting-variables:~$ PWN=COLLEGE
You've set the PWN variable properly! As promised, here is the flag:
pwn.college{MJC-Myu2iUBti4y8869MBN5NY1I.QX5UTN0wCN2gjNwEzW}
hacker@variables~setting-variables:~$ 
```
#### 7.3. Multiword variable
```
hacker@variables~multi-word-variables:~$ PWN="COLLEGE YEAH"
You've set the PWN variable properly! As promised, here is the flag:
pwn.college{sazYg-2F_1WRSuNARsJA5iSFyT-.QXwYTN0wCN2gjNwEzW}
hacker@variables~multi-word-variables:~$ 
```
#### 7.4. Exporting variable
```
hacker@variables~exporting-variables:~$ PWN=COLLEGE
You've set the PWN variable to the proper value!
hacker@variables~exporting-variables:~$ COLLEGE=PWN
You've set the PWN variable to the proper value!
You've set the COLLEGE variable to the proper value!
hacker@variables~exporting-variables:~$ /challenge/run 
CORRECT!
You have exported PWN=COLLEGE and set, but not exported, COLLEGE=PWN. Great 
job! Here is your flag:
pwn.college{MACWisGZw8eyoezI31UebhaAoQO.QXyYTN0wCN2gjNwEzW}
You've set the PWN variable to the proper value!
You've set the COLLEGE variable to the proper value!
hacker@variables~exporting-variables:~$ 
```
#### 7.5. Printing exported variable
```
env
pwn.college{g4aCwkEcLWKj0o4RPGMfcNBx9pq.QX4UTN0wCN2gjNwEzW}
```
#### 7.6. Storing command output
```
hacker@variables~storing-command-output:~$ PWN=$(/challenge/run)
Congratulations! You have read the flag into the PWN variable. Now print it out 
and submit it!
hacker@variables~storing-command-output:~$ echo PWN
PWN
hacker@variables~storing-command-output:~$ echo $PWN
pwn.college{wnSAjL4UN7KLUbqFm2jabeSESGz.QX1cDN1wCN2gjNwEzW}
hacker@variables~storing-command-output:~$ 
```
#### 7.7. Reading input
```
hacker@variables~reading-input:~$ read PWN
COLLEGE
You've set the PWN variable properly! As promised, here is the flag:
pwn.college{c3Kjrqk5f9QoojLZIhDfTePPDq-.QX4cTN0wCN2gjNwEzW}
hacker@variables~reading-input:~$ 
```
#### 7.8. Reading file
```
hacker@variables~reading-files:~$ read PWN < /challenge/read_me 
You've set the PWN variable properly! As promised, here is the flag:
pwn.college{geTI7moFqN-PXfPaiI2Enk_AKxp.QXwIDO0wCN2gjNwEzW}
hacker@variables~reading-files:~$ 
```
### 8. Process and jobs
#### 8.1. Listing process
```
hacker@processes~listing-processes:~$ ps -ef| grep /chall
root         119       1  0 04:04 ?        00:00:00 /challenge/14245-run-21051
hacker       342     332  0 04:04 pts/0    00:00:00 grep /chall
hacker@processes~listing-processes:~$ /challenge/14245-run-21051
Yahaha, you found me! Here is your flag:
pwn.college{QRH_Y0G62l_UoL9qH-g_gAq4O8G.QX4MDO0wCN2gjNwEzW}
Now I will sleep for a while (so that you could find me with 'ps').
```
#### 8.2. Killing process
```
hacker@processes~killing-processes:~$ ps aux | grep dont_run
hacker       124  0.0  0.0   5056  3520 ?        Ss   04:15   0:00 /challenge/dont_run
hacker       348  0.0  0.0   4200  2560 pts/0    S+   04:16   0:00 grep dont_run
hacker@processes~killing-processes:~$ kill 124
hacker@processes~killing-processes:~$ ps aux | grep dont_run
hacker       350  0.0  0.0   4200  2240 pts/0    S+   04:17   0:00 grep dont_run
hacker@processes~killing-processes:~$ /challenge/run 
Great job! Here is your payment:
pwn.college{42YRloGfObGKGliAPJ2ehW5HVJr.QXyQDO0wCN2gjNwEzW}
hacker@processes~killing-processes:~$ 
```
#### 8.3. Interupting process
```
hacker@processes~interrupting-processes:~$ /challenge/run 
I could give you the flag... but I won't, until this process exits. Remember, 
you can force me to exit with Ctrl-C. Try it now!
^C
Good job! You have used Ctrl-C to interrupt this process! Here is your flag:
pwn.college{4fVU9puxm0Ou16hvJCq1TvKG0CD.QXzQDO0wCN2gjNwEzW}
hacker@processes~interrupting-processes:~$ 
```
#### 8.4. Suspending process
```
hacker@processes~suspending-processes:~$ /challenge/run 
I'll only give you the flag if there's already another copy of me running in 
this terminal... Let's check!

UID          PID    PPID  C STIME TTY          TIME CMD
root         332     324  0 04:25 pts/0    00:00:00 bash /challenge/run
root         334     332  0 04:25 pts/0    00:00:00 ps -f

I don't see a second me!

To pass this level, you need to suspend me and launch me again! You can 
background me with Ctrl-Z or, if you're not ready to do that for whatever 
reason, just hit Enter and I'll exit!
^Z
[1]+  Stopped                 /challenge/run
hacker@processes~suspending-processes:~$ /challenge/run 
I'll only give you the flag if there's already another copy of me running in 
this terminal... Let's check!

UID          PID    PPID  C STIME TTY          TIME CMD
root         332     324  0 04:25 pts/0    00:00:00 bash /challenge/run
root         339     324  0 04:25 pts/0    00:00:00 bash /challenge/run
root         341     339  0 04:25 pts/0    00:00:00 ps -f

Yay, I found another version of me! Here is the flag:
pwn.college{AvzxLJp23pV_j2swuuZV-9uHOJj.QX1QDO0wCN2gjNwEzW}
hacker@processes~suspending-processes:~$ 
```
#### 8.5. Resuming process
```
hacker@processes~resuming-processes:~$ /challenge/run 
Let's practice resuming processes! Suspend me with Ctrl-Z, then resume me with 
the 'fg' command! Or just press Enter to quit me!
^Z
[1]+  Stopped                 /challenge/run
hacker@processes~resuming-processes:~$ fg
/challenge/run
I'm back! Here's your flag:
pwn.college{URC-X3oT-GqWn7wDRsvwMBfccUh.QX2QDO0wCN2gjNwEzW}
Don't forget to press Enter to quit me!
```
#### 8.6. Backgrounding process
```
hacker@processes~backgrounding-processes:~$ ls
COLLEGE  PWN	   instruction	 leap	 not-the-flag  the-flag
Desktop  data.txt  instructions  myflag  t
hacker@processes~backgrounding-processes:~$ /challenge/run 
I'll only give you the flag if there's already another copy of me running *and 
not suspended* in this terminal... Let's check!

UID          PID STAT CMD
root         333 S+   bash /challenge/run
root         335 R+   ps -o user=UID,pid,stat,cmd

I don't see a second me!

To pass this level, you need to suspend me, resume the suspended process in the 
background, and then launch a new version of me! You can background me with 
Ctrl-Z (and resume me in the background with 'bg') or, if you're not ready to 
do that for whatever reason, just hit Enter and I'll exit!
^Z
[1]+  Stopped                 /challenge/run
hacker@processes~backgrounding-processes:~$ bg
[1]+ /challenge/run &
hacker@processes~backgrounding-processes:~$ 


Yay, I'm now running the background! Because of that, this text will probably 
overlap weirdly with the shell prompt. Don't panic; just hit Enter a few times 
to scroll this text out.

hacker@processes~backgrounding-processes:~$ /challenge/run 
I'll only give you the flag if there's already another copy of me running *and 
not suspended* in this terminal... Let's check!

UID          PID STAT CMD
root         333 S    bash /challenge/run
root         343 S    sleep 6h
root         344 S+   bash /challenge/run
root         346 R+   ps -o user=UID,pid,stat,cmd

Yay, I found another version of me running in the background! Here is the flag:
pwn.college{Ye9hHH7Iun_FHlZxKdacG_fHv93.QX3QDO0wCN2gjNwEzW}
hacker@processes~backgrounding-processes:~$ 
```
#### 8.7. Forcegrounding process
```
hacker@processes~foregrounding-processes:~$ /challenge/run 
To pass this level, you need to suspend me, resume the suspended process in the 
background, and *then* foreground it without re-suspending it! You can 
background me with Ctrl-Z (and resume me in the background with 'bg') or, if 
you're not ready to do that for whatever reason, just hit Enter and I'll exit!
^Z
[1]+  Stopped                 /challenge/run
hacker@processes~foregrounding-processes:~$ bg
[1]+ /challenge/run &
hacker@processes~foregrounding-processes:~$ 


Yay, I'm now running the background! Because of that, this text will probably 
overlap weirdly with the shell prompt. Don't panic; just hit Enter a few times 
to scroll this text out. After that, resume me into the foreground with 'fg'; 
I'll wait.

hacker@processes~foregrounding-processes:~$ fg
/challenge/run
YES! Great job! I'm now running in the foreground. Hit Enter for your flag!

pwn.college{0JbDNtt5tmGpNmeJDJjeWUqkeau.QX4QDO0wCN2gjNwEzW}
hacker@processes~foregrounding-processes:~$ 
```
#### 8.8. Starting background process
```
hacker@processes~starting-backgrounded-processes:~$ /challenge/run &
[1] 335
hacker@processes~starting-backgrounded-processes:~$ 


Yay, you started me in the background! Because of that, this text will probably 
overlap weirdly with the shell prompt, but you're used to that by now...

Anyways! Here is your flag!
pwn.college{8P6ABltBS2kCd34a5DaO5_6eA6y.QX5QDO0wCN2gjNwEzW}
```
#### 8.9. Process exit codes
```
hacker@processes~process-exit-codes:~$ echo $?
0
hacker@processes~process-exit-codes:~$ /challenge/get-code  
Exiting with an error code!
hacker@processes~process-exit-codes:~$ echo $?
67
hacker@processes~process-exit-codes:~$ /challenge/submit-code 67
CORRECT! Here is your flag:
pwn.college{E4m93dpYRIDTK1pNUEkl_Mk6xFx.QX5YDO1wCN2gjNwEzW}
hacker@processes~process-exit-codes:~$ 
```
### 9. Perceiving permissions
#### 9.1. Changing file ownership
```
hacker@permissions~changing-file-ownership:~$ chown hacker /flag 
\hacker@permissions~changing-file-ownership:~$ cat /flag 
pwn.college{wokSwYePbBExq0C36L7CFQAl6eD.QXxEjN0wCN2gjNwEzW}
hacker@permissions~changing-file-ownership:~$ 
```
#### 9.2. Group and file
```
hacker@permissions~groups-and-files:~$ chgrp hacker /flag 
hacker@permissions~groups-and-files:~$ cat /flag 
pwn.college{Q56R7Wp4tqckeUsWfXoM1m58Qqh.QXxcjM1wCN2gjNwEzW}
hacker@permissions~groups-and-files:~$ 
```
#### 9.3. Fun with group name
```
hacker@permissions~fun-with-groups-names:~$ chgrp grp21725 /flag 
hacker@permissions~fun-with-groups-names:~$ cat /flag 
pwn.college{s2kaSsXxtTTYS4k5GkjaeIissyr.QXycjM1wCN2gjNwEzW}
hacker@permissions~fun-with-groups-names:~$ 
```
#### 9.4. Change permission
```
hacker@permissions~changing-permissions:~$ chmod 777 /flag 
hacker@permissions~changing-permissions:~$ cat /flag 
pwn.college{s4Oxoot66qmWhAP5GQD1zE2x602.QXzcjM1wCN2gjNwEzW}
hacker@permissions~changing-permissions:~$ 
```
#### 9.5. Excutable file
```
hacker@permissions~executable-files:~$ chmod 777 /challenge/run 
hacker@permissions~executable-files:~$ /challenge/run 
Successful execution! Here is your flag:
pwn.college{IgaLuvIEo1PVW72jeJSt1tXHwDs.QXyEjN0wCN2gjNwEzW}
hacker@permissions~executable-files:~$ 
```
#### 9.6. Permission tweaking practice
```
4 for r (read)
2 for w (write)
1 for x (execute)
0 for - (deny)

example: if ownership is rwx then number of ownership is r+w+x= 4+2+1 = 7
         if ownership is r-x then number of ownership is r+0+x= 4+0+1 = 5

hacker@permissions~permission-tweaking-practice:~$ /challenge/run 
Round 1 of 8!

Current permissions of "/challenge/pwn": rw-r--r--
* the user does have read permissions
* the user does have write permissions
- the user doesn't have execute permissions
* the group does have read permissions
- the group doesn't have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
- the world doesn't have write permissions
- the world doesn't have execute permissions

Needed permissions of "/challenge/pwn": rw-rw-rw-
* the user does have read permissions
* the user does have write permissions
- the user doesn't have execute permissions
* the group does have read permissions
* the group does have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
* the world does have write permissions
- the world doesn't have execute permissions
hacker@permissions~permission-tweaking-practice:~$ chmod 777 /challenge/pwn 
NEEDED, BUT UNMET permissions of "/challenge/pwn": rw-rw-rw-
* the user does have read permissions
* the user does have write permissions
- the user doesn't have execute permissions
* the group does have read permissions
* the group does have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
* the world does have write permissions
- the world doesn't have execute permissions

CURRENT, INCORRECT permissions of "/challenge/pwn": rwxrwxrwx
* the user does have read permissions
* the user does have write permissions
* the user does have execute permissions
* the group does have read permissions
* the group does have write permissions
* the group does have execute permissions
* the world does have read permissions
* the world does have write permissions
* the world does have execute permissions

You set the permissions incorrectly! Restarting the game!
hacker@permissions~permission-tweaking-practice:~$ ls
COLLEGE  PWN	   instruction	 leap	 not-the-flag  the-flag
Desktop  data.txt  instructions  myflag  t
hacker@permissions~permission-tweaking-practice:~$ chmod 666 /challenge/pwn 
You set the correct permissions!
Round 2 of 8!

Current permissions of "/challenge/pwn": rw-rw-rw-
* the user does have read permissions
* the user does have write permissions
- the user doesn't have execute permissions
* the group does have read permissions
* the group does have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
* the world does have write permissions
- the world doesn't have execute permissions

Needed permissions of "/challenge/pwn": ---------
- the user doesn't have read permissions
- the user doesn't have write permissions
- the user doesn't have execute permissions
- the group doesn't have read permissions
- the group doesn't have write permissions
- the group doesn't have execute permissions
- the world doesn't have read permissions
- the world doesn't have write permissions
- the world doesn't have execute permissions
hacker@permissions~permission-tweaking-practice:~$ chmod 000 /challenge/pwn 
You set the correct permissions!
Round 3 of 8!

Current permissions of "/challenge/pwn": ---------
- the user doesn't have read permissions
- the user doesn't have write permissions
- the user doesn't have execute permissions
- the group doesn't have read permissions
- the group doesn't have write permissions
- the group doesn't have execute permissions
- the world doesn't have read permissions
- the world doesn't have write permissions
- the world doesn't have execute permissions

Needed permissions of "/challenge/pwn": ------rwx
- the user doesn't have read permissions
- the user doesn't have write permissions
- the user doesn't have execute permissions
- the group doesn't have read permissions
- the group doesn't have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
* the world does have write permissions
* the world does have execute permissions
hacker@permissions~permission-tweaking-practice:~$ chmod 007 /challenge/pwn 
You set the correct permissions!
Round 4 of 8!

Current permissions of "/challenge/pwn": ------rwx
- the user doesn't have read permissions
- the user doesn't have write permissions
- the user doesn't have execute permissions
- the group doesn't have read permissions
- the group doesn't have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
* the world does have write permissions
* the world does have execute permissions

Needed permissions of "/challenge/pwn": ----w-rwx
- the user doesn't have read permissions
- the user doesn't have write permissions
- the user doesn't have execute permissions
- the group doesn't have read permissions
* the group does have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
* the world does have write permissions
* the world does have execute permissions
hacker@permissions~permission-tweaking-practice:~$ chmod 027 /challenge/pwn 
You set the correct permissions!
Round 5 of 8!

Current permissions of "/challenge/pwn": ----w-rwx
- the user doesn't have read permissions
- the user doesn't have write permissions
- the user doesn't have execute permissions
- the group doesn't have read permissions
* the group does have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
* the world does have write permissions
* the world does have execute permissions

Needed permissions of "/challenge/pwn": ----wxrwx
- the user doesn't have read permissions
- the user doesn't have write permissions
- the user doesn't have execute permissions
- the group doesn't have read permissions
* the group does have write permissions
* the group does have execute permissions
* the world does have read permissions
* the world does have write permissions
* the world does have execute permissions
hacker@permissions~permission-tweaking-practice:~$ chmod 037 /challenge/pwn 
You set the correct permissions!
Round 6 of 8!

Current permissions of "/challenge/pwn": ----wxrwx
- the user doesn't have read permissions
- the user doesn't have write permissions
- the user doesn't have execute permissions
- the group doesn't have read permissions
* the group does have write permissions
* the group does have execute permissions
* the world does have read permissions
* the world does have write permissions
* the world does have execute permissions

Needed permissions of "/challenge/pwn": -wx-wxrwx
- the user doesn't have read permissions
* the user does have write permissions
* the user does have execute permissions
- the group doesn't have read permissions
* the group does have write permissions
* the group does have execute permissions
* the world does have read permissions
* the world does have write permissions
* the world does have execute permissions
hacker@permissions~permission-tweaking-practice:~$ chmod 337 /challenge/pwn 
You set the correct permissions!
Round 7 of 8!

Current permissions of "/challenge/pwn": -wx-wxrwx
- the user doesn't have read permissions
* the user does have write permissions
* the user does have execute permissions
- the group doesn't have read permissions
* the group does have write permissions
* the group does have execute permissions
* the world does have read permissions
* the world does have write permissions
* the world does have execute permissions

Needed permissions of "/challenge/pwn": -wx-w-rwx
- the user doesn't have read permissions
* the user does have write permissions
* the user does have execute permissions
- the group doesn't have read permissions
* the group does have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
* the world does have write permissions
* the world does have execute permissions
hacker@permissions~permission-tweaking-practice:~$ chmod 327 /challenge/pwn 
You set the correct permissions!
Round 8 of 8!

Current permissions of "/challenge/pwn": -wx-w-rwx
- the user doesn't have read permissions
* the user does have write permissions
* the user does have execute permissions
- the group doesn't have read permissions
* the group does have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
* the world does have write permissions
* the world does have execute permissions

Needed permissions of "/challenge/pwn": -wx-w--w-
- the user doesn't have read permissions
* the user does have write permissions
* the user does have execute permissions
- the group doesn't have read permissions
* the group does have write permissions
- the group doesn't have execute permissions
- the world doesn't have read permissions
* the world does have write permissions
- the world doesn't have execute permissions
hacker@permissions~permission-tweaking-practice:~$ chmod 322 /challenge/pwn 
You set the correct permissions!
You've solved all 8 rounds! I have changed the ownership
of the /flag file so that you can 'chmod' it. You won't be able to read
it until you make it readable with chmod!

Current permissions of "/flag": ---------
- the user doesn't have read permissions
- the user doesn't have write permissions
- the user doesn't have execute permissions
- the group doesn't have read permissions
- the group doesn't have write permissions
- the group doesn't have execute permissions
- the world doesn't have read permissions
- the world doesn't have write permissions
- the world doesn't have execute permissions
hacker@permissions~permission-tweaking-practice:~$ chmod 777 /flag 
hacker@permissions~permission-tweaking-practice:~$ cat /flag 
pwn.college{MEI4MDl_ExJz_l6Kt1iE7KWV24P.QXwEjN0wCN2gjNwEzW}
hacker@permissions~permission-tweaking-practice:~$ 
```
#### 9.7. Permission setting practice
```
hacker@permissions~permissions-setting-practice:~$ chmod /challenge/pwn 
/usr/bin/chmod: missing operand after ‘/challenge/pwn’
Try '/usr/bin/chmod --help' for more information.
NEEDED, BUT UNMET permissions of "/challenge/pwn": rwx---r-x
* the user does have read permissions
* the user does have write permissions
* the user does have execute permissions
- the group doesn't have read permissions
- the group doesn't have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
- the world doesn't have write permissions
* the world does have execute permissions

CURRENT, INCORRECT permissions of "/challenge/pwn": rw-r--r--
* the user does have read permissions
* the user does have write permissions
- the user doesn't have execute permissions
* the group does have read permissions
- the group doesn't have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
- the world doesn't have write permissions
- the world doesn't have execute permissions

You set the permissions incorrectly! Restarting the game!
hacker@permissions~permissions-setting-practice:~$ chmod u=rwx,g=-,o=r-x /challenge/pwn 
NEEDED, BUT UNMET permissions of "/challenge/pwn": rwx---r-x
* the user does have read permissions
* the user does have write permissions
* the user does have execute permissions
- the group doesn't have read permissions
- the group doesn't have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
- the world doesn't have write permissions
* the world does have execute permissions

CURRENT, INCORRECT permissions of "/challenge/pwn": rwx---r--
* the user does have read permissions
* the user does have write permissions
* the user does have execute permissions
- the group doesn't have read permissions
- the group doesn't have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
- the world doesn't have write permissions
- the world doesn't have execute permissions

You set the permissions incorrectly! Restarting the game!
hacker@permissions~permissions-setting-practice:~$ chmod u=rwx,g=-,o=rx /challenge/pwn 
You set the correct permissions!
Round 2 of 8!

Current permissions of "/challenge/pwn": rwx---r-x
* the user does have read permissions
* the user does have write permissions
* the user does have execute permissions
- the group doesn't have read permissions
- the group doesn't have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
- the world doesn't have write permissions
* the world does have execute permissions

Needed permissions of "/challenge/pwn": r------w-
* the user does have read permissions
- the user doesn't have write permissions
- the user doesn't have execute permissions
- the group doesn't have read permissions
- the group doesn't have write permissions
- the group doesn't have execute permissions
- the world doesn't have read permissions
* the world does have write permissions
- the world doesn't have execute permissions
hacker@permissions~permissions-setting-practice:~$ chmod u=r,g=-,o=w /challenge/pwn 
You set the correct permissions!
Round 3 of 8!

Current permissions of "/challenge/pwn": r------w-
* the user does have read permissions
- the user doesn't have write permissions
- the user doesn't have execute permissions
- the group doesn't have read permissions
- the group doesn't have write permissions
- the group doesn't have execute permissions
- the world doesn't have read permissions
* the world does have write permissions
- the world doesn't have execute permissions

Needed permissions of "/challenge/pwn": -wx-wxrwx
- the user doesn't have read permissions
* the user does have write permissions
* the user does have execute permissions
- the group doesn't have read permissions
* the group does have write permissions
* the group does have execute permissions
* the world does have read permissions
* the world does have write permissions
* the world does have execute permissions
hacker@permissions~permissions-setting-practice:~$ chmod a=wx,o=rwx /challenge/pwn 
You set the correct permissions!
Round 4 of 8!

Current permissions of "/challenge/pwn": -wx-wxrwx
- the user doesn't have read permissions
* the user does have write permissions
* the user does have execute permissions
- the group doesn't have read permissions
* the group does have write permissions
* the group does have execute permissions
* the world does have read permissions
* the world does have write permissions
* the world does have execute permissions

Needed permissions of "/challenge/pwn": r-xrw-rwx
* the user does have read permissions
- the user doesn't have write permissions
* the user does have execute permissions
* the group does have read permissions
* the group does have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
* the world does have write permissions
* the world does have execute permissions
hacker@permissions~permissions-setting-practice:~$ chmod u=rx,g=rw,o=rwx /challenge/pwn 
You set the correct permissions!
Round 5 of 8!

Current permissions of "/challenge/pwn": r-xrw-rwx
* the user does have read permissions
- the user doesn't have write permissions
* the user does have execute permissions
* the group does have read permissions
* the group does have write permissions
- the group doesn't have execute permissions
* the world does have read permissions
* the world does have write permissions
* the world does have execute permissions

Needed permissions of "/challenge/pwn": -------wx
- the user doesn't have read permissions
- the user doesn't have write permissions
- the user doesn't have execute permissions
- the group doesn't have read permissions
- the group doesn't have write permissions
- the group doesn't have execute permissions
- the world doesn't have read permissions
* the world does have write permissions
* the world does have execute permissions
hacker@permissions~permissions-setting-practice:~$ chmod a=-,o=wx /challenge/pwn 
You set the correct permissions!
Round 6 of 8!

Current permissions of "/challenge/pwn": -------wx
- the user doesn't have read permissions
- the user doesn't have write permissions
- the user doesn't have execute permissions
- the group doesn't have read permissions
- the group doesn't have write permissions
- the group doesn't have execute permissions
- the world doesn't have read permissions
* the world does have write permissions
* the world does have execute permissions

Needed permissions of "/challenge/pwn": r-xrw--wx
* the user does have read permissions
- the user doesn't have write permissions
* the user does have execute permissions
* the group does have read permissions
* the group does have write permissions
- the group doesn't have execute permissions
- the world doesn't have read permissions
* the world does have write permissions
* the world does have execute permissions
hacker@permissions~permissions-setting-practice:~$ chmod u=rx,g=rw,o=wx /challenge/pwn 
You set the correct permissions!
Round 7 of 8!

Current permissions of "/challenge/pwn": r-xrw--wx
* the user does have read permissions
- the user doesn't have write permissions
* the user does have execute permissions
* the group does have read permissions
* the group does have write permissions
- the group doesn't have execute permissions
- the world doesn't have read permissions
* the world does have write permissions
* the world does have execute permissions

Needed permissions of "/challenge/pwn": --x--x---
- the user doesn't have read permissions
- the user doesn't have write permissions
* the user does have execute permissions
- the group doesn't have read permissions
- the group doesn't have write permissions
* the group does have execute permissions
- the world doesn't have read permissions
- the world doesn't have write permissions
- the world doesn't have execute permissions
hacker@permissions~permissions-setting-practice:~$ chmod a=-,u=x,g=x /challenge/pwn 
You set the correct permissions!
Round 8 of 8!

Current permissions of "/challenge/pwn": --x--x---
- the user doesn't have read permissions
- the user doesn't have write permissions
* the user does have execute permissions
- the group doesn't have read permissions
- the group doesn't have write permissions
* the group does have execute permissions
- the world doesn't have read permissions
- the world doesn't have write permissions
- the world doesn't have execute permissions

Needed permissions of "/challenge/pwn": -w-r-xr-x
- the user doesn't have read permissions
* the user does have write permissions
- the user doesn't have execute permissions
* the group does have read permissions
- the group doesn't have write permissions
* the group does have execute permissions
* the world does have read permissions
- the world doesn't have write permissions
* the world does have execute permissions
hacker@permissions~permissions-setting-practice:~$ chmod u=w,g=rx,o=rx /challenge/pwn 
You set the correct permissions!
You've solved all 8 rounds! I have changed the ownership
of the /flag file so that you can 'chmod' it. You won't be able to read
it until you make it readable with chmod!

Current permissions of "/flag": ---------
- the user doesn't have read permissions
- the user doesn't have write permissions
- the user doesn't have execute permissions
- the group doesn't have read permissions
- the group doesn't have write permissions
- the group doesn't have execute permissions
- the world doesn't have read permissions
- the world doesn't have write permissions
- the world doesn't have execute permissions
hacker@permissions~permissions-setting-practice:~$ chmod a=rwx /flag 
hacker@permissions~permissions-setting-practice:~$ cat /flag 
pwn.college{AAPa6_V5xkL5OQuAtjiM4Q4Rs_v.QXzETO0wCN2gjNwEzW}
hacker@permissions~permissions-setting-practice:~$ 
```
#### 9.8. The SSID Bit
```
hacker@permissions~the-suid-bit:~$ chmod u+s /challenge/getroot 
hacker@permissions~the-suid-bit:~$ /challenge/getroot 
SUCCESS! You have set the suid bit on this program, and it is running as root! 
Here is your shell...
root@permissions~the-suid-bit:~# cat /flag 
pwn.college{Y7EyaBV43y5oVgF4u6HT9OCb9_U.QXzEjN0wCN2gjNwEzW}
root@permissions~the-suid-bit:~# 
```
### 10. Untangling Users
#### 10.1. Becoming root with su
```
hacker@users~becoming-root-with-su:~$ su
Password: 
root@users~becoming-root-with-su:/home/hacker# cat /flag 
pwn.college{UH76UXrOXT-9hR7G0wvYL0siJFG.QX1UDN1wCN2gjNwEzW}
root@users~becoming-root-with-su:/home/hacker# 
```
#### 10.2. Other user with su
```
hacker@users~other-users-with-su:~$ su zardus
Password: 
zardus@users~other-users-with-su:/home/hacker$ /challenge/run 
Congratulations, you have become Zardus! Here is your flag:
pwn.college{s7WBakfn2L7-SIYZt-FzVGALO5I.QX2UDN1wCN2gjNwEzW}
zardus@users~other-users-with-su:/home/hacker$ 
```
#### 10.3. Cracking password
```
hacker@users~cracking-passwords:~$ john /challenge/shadow-leak 
Created directory: /home/hacker/.john
Loaded 1 password hash (crypt, generic crypt(3) [?/64])
Press 'q' or Ctrl-C to abort, almost any other key for status
aardvark         (zardus)
1g 0:00:00:20 100% 2/3 0.04889g/s 284.7p/s 284.7c/s 284.7C/s Johnson..buzz
Use the "--show" option to display all of the cracked passwords reliably
Session completed
hacker@users~cracking-passwords:~$ su zardus
Password: 
zardus@users~cracking-passwords:/home/hacker$ cat /flag 
cat: /flag: Permission denied
zardus@users~cracking-passwords:/home/hacker$ /challenge/run 
Congratulations, you have become Zardus! Here is your flag:
pwn.college{sB6n173XAosAQMm3bbogEoyoJc_.QX3UDN1wCN2gjNwEzW}
zardus@users~cracking-passwords:/home/hacker$ 
```
#### 10.4. Using sudo
```
hacker@users~using-sudo:~$ sudo cat /flag 
pwn.college{4PJ4aLIe2WpjtRoOAibxdaKHfcM.QX4UDN1wCN2gjNwEzW}
hacker@users~using-sudo:~$
```
### 11. Chaining commands
#### 11.1. Chaining with Semicolons
```
hacker@chaining~chaining-with-semicolons:~$ /challenge/pwn ; /challenge/college 
Yes! You chained /challenge/pwn and /challenge/college! Here is your flag:
pwn.college{AoAKwDaHqWXpMw3m2z3FDOgvDbt.QX1UDO0wCN2gjNwEzW}
hacker@chaining~chaining-with-semicolons:~$ 
```
#### 11.2. Your first shell script
```
using neo vim to edit
save with :w > Enter
quite neo vim :q > Enter
```
```bash
#!/bin/bash

/challenge/pwn
/challenge/college
```
```
bash x.sh
```
```rs
hacker@chaining~your-first-shell-script:~/Desktop$ bash x.sh 
Great job, you've written your first shell script! Here is the flag:
pwn.college{YHBylTG4dfELGWJRpINTSr4CfvL.QXxcDO0wCN2gjNwEzW}
hacker@chaining~your-first-shell-script:~/Desktop$ 
```
#### 11.3. Redirecting Script Output
```bash script
#!/bin/bash

/challenge/pwn;/challenge/college
```
```bash
hacker@chaining~redirecting-script-output:~/Desktop$ bash s.sh | /challenge/solve 
s.sh: line 1: !#/bin/bash: No such file or directory
Correct! Here is your flag:
pwn.college{8pqPRj-SVFbScnssC2yUrtK00F1.QX4ETO0wCN2gjNwEzW}
hacker@chaining~redirecting-script-output:~/Desktop$ 
```
#### 11.4. Executable Shell Script
```bash
#!/bin/sh
/challenge/solve
```
```bash
hacker@chaining~executable-shell-scripts:~$ touch script.sh
hacker@chaining~executable-shell-scripts:~$ vim script.sh
hacker@chaining~executable-shell-scripts:~$ chmod 777 script.sh 
hacker@chaining~executable-shell-scripts:~$ ./script.sh 
./script.sh: line 1: !#/bin/sh: No such file or directory
Congratulations on your shell script execution! Your flag:
pwn.college{YPoJylK1-p9xwb3IHT2HUYhlJ3I.QX0cjM1wCN2gjNwEzW}
hacker@chaining~executable-shell-scripts:~$ 
```
### 12. Pondering Paths
#### 12.1. The Path Variable
```bash
//without PATH can not find ls or rm
hacker@path~the-path-variable:~$ PATH="" 
hacker@path~the-path-variable:~$ ls
-bash: ls: No such file or directory
hacker@path~the-path-variable:~$ /challenge/run 
Trying to remove /flag...
/challenge/run: line 4: rm: No such file or directory
The flag is still there! I might as well give it to you!
pwn.college{U4r0lQPRZ_DUE9jNw9gZ1-J-Mk6.QX2cDM1wCN2gjNwEzW}
hacker@path~the-path-variable:~$ 
```
#### 12.2. Setting PATH
```bash
hacker@path~setting-path:~$ PATH=/challenge/more_commands/
hacker@path~setting-path:~$ win
It looks like 'win' was improperly launched. Don't launch it directly; it MUST 
be launched by /challenge/run!
hacker@path~setting-path:~$ /challenge/run 
Invoking 'win'....
Congratulations! You properly set the flag and 'win' has launched!
pwn.college{UomkABUPzokLI-4jvsYMXbz2xx_.QX1cjM1wCN2gjNwEzW}
hacker@path~setting-path:~$ 
```
#### 12.3. Adding Commands
```vim
#!/bin/bash
cat /flag
```
```bash
hacker@path~adding-commands:~$ vim win
hacker@path~adding-commands:~$ chmod 777 win
hacker@path~adding-commands:~$ echo $PATH
/run/challenge/bin:/run/workspace/bin:/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin
hacker@path~adding-commands:~$ PATH="/home/hacker:$PATH"
hacker@path~adding-commands:~$ /challenge/run 
Invoking 'win'....
pwn.college{ojeBKnDROAxtfylCO4KHsWcdPfC.QX2cjM1wCN2gjNwEzW}
hacker@path~adding-commands:~$ 
```
#### 12.4. Hijacking Commands
```Solution
Solution: When hit /challenge/run it'll call rm for delete /flag. So,
we can try create rm at /home/hacker/, chmod 777 rm, set variable PATH and try /challenge/run again,
IT WORK!
```
```rm content
# rm content
#!/bin/bash
echo "hahaha exploited it"
cat /flag
```
```bash
hacker@path~hijacking-commands:~$ ls
COLLEGE  PWN   data.txt     instructions  myflag	script.sh  the-flag
Desktop  core  instruction  leap	  not-the-flag	t	   win
hacker@path~hijacking-commands:~$ touch rm
hacker@path~hijacking-commands:~$ vim rm 
hacker@path~hijacking-commands:~$ chmod 777 rm
hacker@path~hijacking-commands:~$ PATH="/home/hacker:$PATH"
hacker@path~hijacking-commands:~$ /challenge/run 
Trying to remove /flag...
Found 'rm' command at /home/hacker/rm. Executing!
its fucking safe dude
hacker@path~hijacking-commands:~$ cat /flag 
cat: /flag: Permission denied
hacker@path~hijacking-commands:~$ vim rm 

[No write since last change]
 09:26:36 up 110 days,  8:14,  0 user,  load average: 8.86, 9.81, 9.94
USER     TTY        LOGIN@   IDLE   JCPU   PCPU WHAT

Press ENTER or type command to continue
hacker@path~hijacking-commands:~$ /challenge/run 
Trying to remove /flag...
Found 'rm' command at /home/hacker/rm. Executing!
its fucking safe dude
pwn.college{4as3IIAVZwGzY5qJ-BLhNvffTz_.QX3cjM1wCN2gjNwEzW}
hacker@path~hijacking-commands:~$ 
```

## References

- [linux-luminarium](https://pwn.college/linux-luminarium/)


