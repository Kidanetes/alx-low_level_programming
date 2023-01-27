#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcode of own main function
 * @argc: argument count
 * @argv: array of arguments
 * Return: 1 or 2 on fail, 0 on success
 */
int main(int argc, char *argv[])
{
	int n, i;
	unsigned char *func_ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	func_ptr = (unsigned char *)main;
	i = 0;
	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%.2hhx", a[i]);
			if (i < n - 1)
				printf(" ");
		}
		printf("\n");
	}
	return (0);
}
