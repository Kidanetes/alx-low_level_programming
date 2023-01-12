#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: input paramter
 * @argv: input paramter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 0, j = 0;
	unsigned long result;

	if ((argc - 1) != 2)
	{
		printf("%s\n", "Error");
		exit(98);
	}
	while (argv[1][i] != '\0')
	{
		if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
		{
			printf("%s\n", "Error");
			exit(98);
		}
		i++;
	}
	while (argv[2][i] != '\0')
	{
		if (!(argv[2][j] >= '0' && argv[2][j] <= '9')) 
		{
			printf("%s\n", "Error");
			exit(98);
		}
		j++;
	}
	result = atol(argv[1]) * atol(argv[2]);
	printf("%d\n", result);
	return (0);
}

