#include "search_algos.h"
void print_subarray(int *array, size_t i, size_t j);
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
	m = (i + j) / 2;
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
	if ((int)j < 0 || i >= size)
		return (-1);
	print_subarray(array, i, j);
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
		j = m;
	else
	{
		if (m > 0 && array[m - 1] == value)
		{
			if (j == m)
				j = m - 1;
			else
				j = m;
		}
		else
		{
			i = m;
			return (m);
		}
	}
	return (advanced_binary2(array, size, i, j, m, value));
}
/**
 * print_subarray - print a sub array
 * @array: array
 * @i: lower bound
 * @j: upper bound
 * return: nothing
 */
void print_subarray(int *array, size_t i, size_t j)
{
	printf("Searching in array: ");
	for (; (int)i <= (int)j; i++)
	{
		printf("%d", array[i]);
		if (i < j)
			printf(", ");
		else
			printf("\n");
	}
}
