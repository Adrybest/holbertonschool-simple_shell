#include "shell.h"

/**
 * main - its main of fonction
 * Return: 0
*/

int main(void)
{
	char *command;

	while (1)
	{
		prompt();
		command = _getline();
		if (command == NULL)
		{
			printf("\n");
			break;
		}

		_execute(command);
		free(command);
	}

	return (0);
}

