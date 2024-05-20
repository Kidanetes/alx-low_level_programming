#include "search_algos.h"
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
