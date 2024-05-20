#include "search_algos.h"
/**
 * jump_search - serach using jump search aligorithm
 * @array: array to be searched
 * @size: size f the array to be searched
 * @value: value to be searched
 * Return: index of the found value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int i = 0, j;
	int n = (int)sqrt(size);

	if (array == NULL)
		return (-1);
	while (i < (int)size)
	{
		j = i + n;
		if (array[i] > value)
			return (-1);
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[j] >= value || j > (int)size - 1)
		{
			printf("Value found between indexes [%d] and [%d]\n", i, j);
			break;
		}
		i = j;
		j = j + n;
	}
	while (i <= j && i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
