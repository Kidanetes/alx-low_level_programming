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
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * (size + 1)];
		sum2 = sum2 + a[(i + 1) * (size - 1)];
	}
	printf("%d, %d", sum1, sum2);
}
