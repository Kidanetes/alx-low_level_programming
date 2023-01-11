#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: input parameter
 * @argv: input parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i = 1, j = 0, sum = 0;

	while (i < argc)
	{
		j = 0;
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
			{
				printf("%s\n", "Error");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
