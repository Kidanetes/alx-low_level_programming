#include "search_algos.h"
/**
 * binary_search - search using binary search aligorithm
 * @array: array to be searched
 * @size: size f the array to be searched
 * @value: value to be searched
 * Return: index of the found value or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t i = 0, m;
	size_t j = size - 1;

	if (array == NULL)
		return (-1);
	m = (i + j) / 2;
	return (advanced_binary2(array, i, j, m, value));
}
/**
 * binary_search - search using binary search aligorithm
 * @array: array to be searched
 * @i: lower bound
 * @j: upper bound
 * @m: middle
 * @value: value to be searched
 * Return: index of the found value or -1
 */
int advanced_binary2(int *array, size_t i, size_t j, size_t m, int value)
{
	size_t n;

	printf("Searching in array: ");
	for (n = i; n <= j; n++)
	{
		printf("%d", array[n]);
		if (n < j)
			printf(", ");
		else
			printf("\n");
	}
	if (i == j)
	{
		if (array[i] == value)
			return (i);
		else
			return (-1);
	}
	m = (i + j) / 2;
	if (array[m] < value)
		i = m + 1;
	else if (array[m] > value)
		j = m - 1;
	else
		j = m;
return (advanced_binary2(array, i, j, m, value));
}




