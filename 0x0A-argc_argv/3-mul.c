#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: input parameter
 * @argv: input parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int result = 1;

	if ((argc - 1) != 2)
	{
		printf("%s\n","Error");
		return (1);
	}
	result = atoi(*(++argv)) * atoi( *(++argv));
	printf("%d\n", result);
	return (0);
}
