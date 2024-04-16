#include "shell.h"
/**
 * prompt - create a environement variable
 * Return: 0
*/

int main(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	/*Print "$ " to indicate prompt*/
	printf("$ ");

	/*Get user input*/
	read = getline(&line, &len, stdin);
	if (read != -1)
	{
		/*Print the entered command*/
		printf("%s", line);
	}
	else
	{
		printf("Error reading input\n");
	}

	/*Free dynamically allocated memory*/
	free(line);

	return (0);
}
