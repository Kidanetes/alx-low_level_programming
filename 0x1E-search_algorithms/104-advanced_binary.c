#include "search_algos.h"
/**
 * advanced_binary - search using binary search aligorithm
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
	m = (i + j + 1) / 2;
	return (advanced_binary2(array, size, i, j, m, value));
}
/**
 * advanced_binary2 - search using binary search aligorithm
 * @array: array to be searched
 * @size: size
 * @i: lower bound
 * @j: upper bound
 * @m: middle
 * @value: value to be searched
 * Return: index of the found value or -1
 */
int advanced_binary2(int *array, size_t size,
		     size_t i, size_t j, size_t m, int value)
{
	size_t n;

	if ((int)j < 0 || i >= size)
		return (-1);
	printf("Searching in array: ");
	for (n = i; (int)n <= (int)j; n++)
	{
		printf("%d", array[n]);
		if (n < j)
			printf(", ");
		else
			printf("\n");
	}
	m = (i + j) / 2;
	if (i == j)
	{
		if (array[i] == value)
			return (i);
		return (-1);
	}
	if (array[m] < value)
		i = m + 1;
	else if (array[m] > value)
		j = m - 1;
	else
	{
		if (m > 0 && array[m - 1] == value)
			j = m;
		else
			return (m);
	}
	return (advanced_binary2(array, size, i, j, m, value));
}
