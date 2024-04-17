#include <stdio.h>
#include <stdlib.h>

int main()
{
	char *lineptr;
	size_t n = 5;
	lineptr = malloc(n * sizeof(char));
	printf("$ ");
	getline(&lineptr, &n, stdin);
	printf("%s\n", lineptr);

	return (0);
}
