#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - add the sum of the
 * diagonal of square matrix
 * @a: input parameter
 * @size: input parameter
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum = sum + a[i][j];
				break;
			}
		}
	}
	printf("%d", sum);
}
