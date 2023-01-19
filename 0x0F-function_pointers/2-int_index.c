#include "function_pointers.h"
/**
 * int_index - searches for an index
 * @array: input parameter 1
 * @size: input paramter 2
 * @cmp: input parameter 3
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}

