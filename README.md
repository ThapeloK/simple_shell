# C - Simple Shell

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://github.com/ThapeloK/printf)

## Description
This is a alx-holberton school projects that replicates some of the processes of the 'sh' shell or bash shell. A partner project with @MercyMueniMwangi

******************************************************************************


Table of contents
=================

<!--ts-->
   * [Description](#description)
   * [Table of contents](#table-of-contents)
   * [General Requirements](#general-requirements)
   * [List of allowed functions and system calls](#list-of-allowed-functions-and-system-calls)
   * [Function Description](#function-description)
   * [Compilation](#compilation)
   * [Authors](#authors)
<!--te-->

******************************************************************************


## General Requirements

- Allowed editors: vi, vim, emacs
- All your files will be compiled on Ubuntu 14.04 LTS
- Your C programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
- All your files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Your shell should not have any memory leaks
- No more than 5 functions per file
- All your header files should be include guarded

******************************************************************************


## List of allowed functions and system calls

  `access`, `chdir`, `close`, `closedir`, `execve`, `exit`, `fork`,
`free`, `fstat`, `getcwd`, `getline`, `kill`, `lstat`, `malloc`,
`open`, `opendir`, `perror`, `read`, `readdir`, `signal`, `stat`,
`strtok`, `wait`, `waitpid`, `wait3`, `wait4`, `write`, `_exit`

******************************************************************************

## Function Description


| Function               | Description                                                         |
| ---------------------- | ------------------------------------------------------------------- |
| `shell.c`              | `simple UNIX command interpreter.`                                  |


******************************************************************************

## Compilation

Your shell will be compiled this way:

```
$ gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

******************************************************************************

## Authors
* **Thapelo** - [ThapeloK](https://github.com/ThapeloK/)
* **Mercy** - [MercyMueniMwangi](https://github.com/MercyMueniMwangi)