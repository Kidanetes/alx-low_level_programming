#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: input parameter1
 * @s2: input parameter2
 * @n: input parameter3
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, size;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	if (n < j)
		size = i + n + 1;
	else
		size = i + j + 1;
	str = malloc(size);
	if (str == NULL)
		return (NULL);
	j = i;
	i = 0;
	while (i < size - 1)
	{
		if (i < j)
			str[i] = s1[i];
		else
			str[i] = s2[i - j];
	}
	str[i] = '\0';
	return (str);
}

