#include "shell.h"
/**
 * _execute - fonction that execute the line after the prompt
 * @command: pointer array
 * Return: 0
*/

int _execute(char *command)
{
	int chld;
	char *args[] = {NULL,  NULL};
	pid_t pid = fork();

	if (pid == -1)
	{
		perror("fork error");/*creation failed*/
		exit(1);
	}
	if (pid == 0)
	{
		args[0] = command;
		args[1] = NULL;
		if (strcmp(command, args[0]) == 0)
		{
			if (execve(args[0], args, NULL) == -1)
			{
				perror("./hsh");
				exit(1);
			}
		}
		else
		{
			exit(1);
		}
	}
	else
	{
		waitpid(pid, &chld, 0);/*Wait for the child process to finish*/
	}
	return (0);
}
