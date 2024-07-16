#include "search_algos.h"
/**
 * exponential_search - search using exponential search aligorithm
 * @array: array to be searched
 * @size: size f the array to be searched
 * @value: value to be searched
 * Return: index of the found value or -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1, j;
	int m;

	if (array == NULL)
		return (-1);
	for ( ; i < size && array[i] < value; i = i * 2)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	if (i > size - 1)
	{
		i = size - 1;
		j = i / 2 + 1;
	}
	else
		j = i / 2;
	printf("Value found between indexes [%ld] and [%ld]\n", j, i);
	m = binary_search(&array[j], i - j + 1, value);
	if (m == -1)
		return (-1);
	else
		return ((int)j + m);
}

/**
 * binary_search - search using binary search aligorithm
 * @array: array to be searched
 * @size: size f the array to be searched
 * @value: value to be searched
 * Return: index of the found value or -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, m, n;
	size_t j = size - 1;

	if (array == NULL)
		return (-1);

	while (i <= j)
	{
		printf("Searching in array: ");
		for (n = i; n <= j; n++)
		{
			printf("%d", array[n]);
			if (n < j)
				printf(", ");
			else
				printf("\n");
		}
		m = (i + j) / 2;
		if (array[m] < value)
			i = m + 1;
		else if (array[m] > value)
			j = m - 1;
		else
			return (m);
	}
	return (-1);
}
