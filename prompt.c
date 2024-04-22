#include "shell.h"
/**
 * prompt - create a environement variable
*/
void prompt(void)
{
	write(STDOUT_FILENO, "$ ", 2);
}
