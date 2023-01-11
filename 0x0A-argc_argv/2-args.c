#include <stdio.h>
/**
 * main - entry point
 * @argc: input parameter
 * @argv: input parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
	while (argc > 0)
	{
		printf("%s\n", *argv++);
		argc--;
	}
	return (0);
}

