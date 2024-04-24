#include "shell.h"
/**
 * _execute - fonction that execute the line after the prompt
 * @command: pointer array
 * Return: 0
*/

int _execute(char *command)
{
	int chld;
	char *args[length];
	int count = 0;
	char *token = strtok(NULL, " ");
	pid_t pid = fork();

	if (pid == -1)
	{
		perror("fork error");/*creation failed*/
		exit(1);
	}
	if (pid == 0)
	{
	args[count++] = command;
	while (token != NULL && count < length - 1)/*(- 1) = place for NULL char*/
	{
		args[count++] = token;/*add token argument at the line readed*/
	}
	args[count] = NULL;/*to finish the array by the NULL argument*/
		if (execve(args[0], args, NULL) == -1)/*execute the command*/
		{
			perror("./hsh");
			exit(1);
		}
		else
		{
			exit(1);
		}
	}
	else
	{
		wait(&chld);/*Wait for the child process to finish*/
	}
	return (0);
}
