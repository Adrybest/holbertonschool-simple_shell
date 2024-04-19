#include "shell.h"
/**
 * main - main
 * Return: 0
*/
int main(void)
{
	const int max_lenght = 100;
	char line[max_lenght];
	int chld;

	while (1)
	{
		prompt();
		/*fgets = foef*/
		/*reads the next char from stream and returns it as an char to an int*/
		if (fgets(line, max_lenght, stdin) == NULL)/*Read user command*/
		{
			/*Manage end of file (Ctrl+D)*/
			printf("\n");
			break;
		}
		/*Delete new line character at end of command*/
		line[strcspn(line, "\n")] = '\0';
		pid_t pid = fork();

		if (pid == -1)
		{
			perror("fork error");/*creation failed*/
			exit(EXIT_FAILURE);
		}
		else if (pid == 0)
		{
			/*execpl: searches for the executable file specified by "line"*/
			if (execlp(line, line, NULL) == -1)/*Run the command*/
			{
				perror("./hsh");
				exit(EXIT_FAILURE);
			}
		}
		else
		{
			waitpid(pid, &chld, 0);/*Wait for the child process to finish*/
		}
	}
	return (0);
}
