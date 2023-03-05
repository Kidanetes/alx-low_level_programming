#include "main.h"
#include <stdlib.h>
/**
 * strtow - split a string into words
 * @str: the string
 *
 * Return: double pointer
 */
char **strtow(char *str)
{
	int x = 0, i, j, k, length;
	char **strtow;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			x++;
	}
	x++;
	strtow = malloc(x);
	if (strtow == NULL)
		return (NULL);
	j = 0;
	for (i = 0; i < x; i++)
	{
		length = 0;
		while (str[j]  != ' ' && str[j] != '\0')
		{
			length++;
		}
		if (length != 0)
		{
			strtow[i] = malloc(length + 1);
			i++;
		}
		if (strtow[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(strtow[i]);
			free(strtow);
			return (NULL);
		}
		j++;
	}
	j = 0;
	for (i = 0; i < x; i++)
	{
		k = 0;
		while (*s != ' ' && *s != '\0')
		{
			strtow[i][k] = *str;
			str++;
			k++;
		}
		while (*str == ' ')
			str++;
		i++;
	}
	return (strtow);
}
	
	
	
 
