#include "main.h"
/**
 * reverse_array - reverse the elements of an array
 * @a: input parameter
 * @n: input parameter
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0, j, tmp;

	j = n - 1;
	while (i <= j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
