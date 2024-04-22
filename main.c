#include "shell.h"


int main(void)
{
	char *command;

	while (1)
	{
		prompt();
		command = _getline();
		if (command == NULL)
		{
			break;
		}

		_execute(command);
		free(command);
	}

	return (0);
}
