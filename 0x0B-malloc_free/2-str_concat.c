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
	int i = 0, j = 0, size, k;
	char *array;

	if (s1 == NULL)
		s1 = "";
	for (; s1[i] != '\0'; i++)
		;
	for (; s2[j] != '\0'; j++)
		;
	size = i + j + 1;
	k = i;
	array = malloc(size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size - 1; i++)
	{
		if (i < k)
			array[i] = s1[i];
		else
			array[i] = s2[i - k];
	}
	array[i] = '\0';
	return (array);
}
