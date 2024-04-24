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
			if (feof(stdin))
			{
				printf("\n");
			}
			else
			{
				exit(0);
			}
			break;
		}

		command = strtok(line, " ");
		if (command != NULL)
		{
			_execute(command);
		}
		free(line);
	}

	return (0);
}
