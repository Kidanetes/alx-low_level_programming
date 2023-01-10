#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: input parameter1
 * @s2: input parameter2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, size;
	char *array;

	for (; s1[i] != '\0'; i++)
	{
	}
	for (; s2[j] != '\0'; j++)
	{
	}
	size = i + j + 1;
	array = malloc(size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		if (i < j)
		{
			if (s1[i] != '')
				array[i] = s1[i];
		}
		else
		{
			if (s2[i - j] != '')
				array[i] = s2[i - j];
		}
	}
	array[i] = '\0';
	return (array);
}
