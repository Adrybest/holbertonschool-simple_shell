#include "shell.h"

/**
 * main - ...
 *
 * Return: Always 0.
*/

int main(void)
{
	const int max_length = 100;
	char line[max_length];
	int chld;
	char *argv[] = {"/bin/sh", "-c", line, NULL};

	while (1)
	{
		prompt();

		if (fgets(line, max_length, stdin) == NULL)
		{
			printf("\n");
			break;
		}

		line[strcspn(line, "\n")] = '\0';

		pid_t pid = fork();

		if (pid == -1)
		{
			perror("./hsh");
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				perror("./hsh");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			waitpid(pid, &chld, 0);
		}
	}

	return (0);
}
