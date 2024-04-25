#include "shell.h"
/**
 * main - its main of fonction
 * Return: 0
*/

int main(void)
{
	char *command;
	char *line;

	while (1)
	{
		if (isatty(STDIN_FILENO))
			prompt();
		line = _getline();
		if (line == NULL)
		{
			exit(1);
		}

		command = strtok(line, " \n");
		if (command != NULL)
		{
			_execute(command);
		}

		free(line);
	}

	return (0);
}
