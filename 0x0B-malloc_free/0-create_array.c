#include <stdlib.h>
#include "main.h"
/**
 * create_array - create an array of chars
 * and initializes it with a specific char
 * @size: input parameter
 * @c: input parameter
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size ==  0)
		return ('\0');
	array = malloc(size);
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
