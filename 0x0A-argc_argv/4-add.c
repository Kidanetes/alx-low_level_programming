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
	int  i = 1, sum = 0;
	char **tmp1 = argv, *tmp;

	if (argc == 1)
		printf("0\n");
	else
	{
		argv++;
		while (i < argc)
		{
			tmp = *argv;
			while (*tmp  != '\0')
			{
				if (*tmp < '0' || *tmp  > '9')
				{
					printf("Error\n");
					return (1);
				}
				tmp = tmp + 1;
			}
			if (i != argc - 1)
				argv += 1;
			i++;
		}
		i = 1;
		argv = tmp1 + 1;
		while (i < argc)
		{
			sum = sum + atoi(*argv);
			if (i != argc - 1)
				argv++;
			i++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
