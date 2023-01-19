#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - excutes the passed function
 * @array: input parameter 1
 * @size: input parameter 2
 * @action: input parameter 3
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;
	if (action != NULL && array != NULL)
	{
		for (; i < size; i++)
			action(array[i]);
	}
}
