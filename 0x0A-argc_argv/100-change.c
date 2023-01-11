#include <stdio.h>
#include <stdlib.h>
/**
 * main -Entry point
 * @argc: input parameter
 * @argv: input parameter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int num, change, i = 0, j = 0;
	int cent[] = {25, 10, 5, 2, 1};

	if (argc - 1 != 1)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num = atoi(argv[1]);
	if (num <= 0)
	{
		change = 0;
	}
	else
	{
		change = 0;
		while (j < num)
		{
			if (num - j > a[i])
			{
				j = num - a[i];
				change++;
			}
			else
				i++;
		}
	}
	printf("%d\n", change);
	return (0);
}
		


