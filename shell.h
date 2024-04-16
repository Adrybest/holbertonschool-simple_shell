#ifndef SHELL
#define SHELL

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <string.h>
#include <stdarg.h>
#include <signal.h>
#include <dirent.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/time.h>
#include <sys/resource.h>

/*global variable*/
extern char **environ;


/*main*/
ssize_t getline(char **restrict lineptr, size_t *restrict n, FILE *restrict stream);

/*environement variable*/
char *_getenv(const char *name);
int _setenv(const char *name, const char *value, int overwrite);

/*function that deletes the variable name from the environment*/
int _unsetenv(const char *name);

#endif