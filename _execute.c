#include "shell.h"
/**
 * _execute - fonction that execute the line after the prompt
 * @token: pointer array
 * Return: 0
*/

int _execute(char *command)
{
        int chld;
	char *args[] = {command, NULL};
	pid_t pid = fork();

                if (pid == -1)
                {
                        perror("fork error");/*creation failed*/
                        exit(EXIT_FAILURE);
                }
                if (pid == 0)
		{
			if (execve(command, args, NULL) == -1)
			{
                        	perror("./hsh");
                        	exit(EXIT_FAILURE);
			}
                }
                else
                {
                        waitpid(pid, &chld, 0);/*Wait for the child process to finish*/
                }
        return (0);
}
