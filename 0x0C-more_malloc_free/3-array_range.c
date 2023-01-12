#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: input parameter
 * @max: input parameter
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *array, i = 0;

	if (min > max)
		return (NULL);
	array = malloc((max - min + 1) * sizeof(int));
	if (array == NULL)
		return (NULL);
	while (i < (max - min + 1))
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}
