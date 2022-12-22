#include "main.h"
/**
 * reverse_array - reverse the elements of an array
 * @a: input parameter
 * @n: input parameter
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, j;

	j = n - 1;
	while (i <= j)
	{
		a[i] = a[j];
		i++;
		j--;
	}
}
