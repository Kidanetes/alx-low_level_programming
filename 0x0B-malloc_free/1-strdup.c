#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  copy the string given as a parameter
 * @str - input parameter
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	int size = sizeof(str)/sizeof(char);
	char *array;

	if (str == NULL || array == NULL)
		return (NULL);
	array = malloc(size);
	for (int i = 0; i < size; i++)
	{
		array[i] = *str;
		str++;
	}
	return (array);
}
