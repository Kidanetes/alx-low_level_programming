#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  copy the string given as a parameter
 * @str: input parameter
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	int size, i = 0;
	char *array;

	while (str[i] != '\0')
	{
		i++;
	}
	size = i + 1;
	array = malloc(size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		array[i] = *str;
		str++;
	}
	return (array);
}
