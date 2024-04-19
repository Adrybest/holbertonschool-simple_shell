# Simple Shell

## Description of the project

This is a simple UNIX command line interpreter developed as part of the curriculum at [Holberton School](https://www.holbertonschool.com/). The goal of this project is to create a basic shell capable of interpreting and executing commands entered by the user.

## Command of compilation

**The command to compil the program :**

~~~
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
~~~

## Requirements

• All our files are compiled on Ubuntu 20.04 LTS using gcc, using the -Wall -Werror -Wextra -pedantic -std=gnu89 options.

• Our code uses Betty style and passes Betty checks.

## File Descriptions

• main.c: Main source file containing the logic for the simple shell.

• shell.h: Header file containing function prototypes and macros.

• README.md: README file providing information about the project.

• AUTHORS: File listing all individuals contributing to the project.

## Examples

~~~
$ ./hsh
$ ls
file1  file2  file3
$ pwd
/home/user
$ echo "Hello, world!"
Hello, world!
$ exit
$
~~~

## List of allowed functions and system use

    access (man 2 access)
    chdir (man 2 chdir)
    close (man 2 close)
    closedir (man 3 closedir)
    execve (man 2 execve)
    exit (man 3 exit)
    fork (man 2 fork)
    free (man 3 free)
    fstat (man 2 fstat)
    getcwd (man 3 getcwd)
    getline (man 3 getline)
    kill (man 2 kill)
    lstat (man 2 lstat)
    malloc (man 3 malloc)
    open (man 2 open)
    opendir (man 3 opendir)
    perror (man 3 perror)
    read (man 2 read)
    readdir (man 3 readdir)
    signal (man 2 signal)
    stat (man 2 stat)
    strtok (man 3 strtok)
    wait (man 2 wait)
    waitpid (man 2 waitpid)
    wait3 (man 2 wait3)
    wait4 (man 2 wait4)
    write (man 2 write)
    _exit (man 2 _exit)

## Flowchart

## Authors

[@Adryan](https://www.github.com/Adrybest)\
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/adryan-bestard-973090305/)
[@Jean-alexandre](https://www.github.com/omega-jean)\
[![linkedin](https://img.shields.io/badge/linkedin-0A66C2?style=for-the-badge&logo=linkedin&logoColor=white)](https://www.linkedin.com/in/jean-alexandre-roger-4541172b5/)
