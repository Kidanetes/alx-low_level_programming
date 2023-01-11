#include <stdio.h>
/**
 * main - entry point
 * @argc: input parameter
 * @argv: input parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
	while (--argc)
	{
		printf("%s\n", *argv++)
	}
	return (0);
}

