#include "main.h"
#include <stdlib.h>
/**
 * _strdup -  copy the string given as a parameter
 * @str: input parameter
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	int size, i = 1;
	char *array;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
	{
		i++;
	}
	size = i;
	array = malloc(size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++, str++)
		array[i] = *str;
	array[i] = '\0';
	return (array);
}
