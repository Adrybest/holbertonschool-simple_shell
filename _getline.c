#include "shell.h"
/**
 * _getline - function tu read the line after the prompt
 * Return: the line.
*/

char *_getline(void)
{
	char *line = NULL;
	size_t size = 0;
	ssize_t read_line;

	/*checks if the standard input is connected to a terminal */
	if (isatty(STDIN_FILENO))
	{
		prompt();/*if its good, display the prompt*/
	}

	read_line = getline(&line, &size, stdin);/*read input data of line & size*/

	if (read_line <= 0)
	{
		free(line);
		return (0);
	}
	return (line);
}
