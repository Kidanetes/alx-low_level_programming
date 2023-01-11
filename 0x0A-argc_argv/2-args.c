#include <stdio>
/**
 * main - entry point
 * @argc: input parameter
 * @argv: input parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num = argc;
	while (--argc)
	{
		printf("%s\n", *argv++)
	}
	return (0);
}

