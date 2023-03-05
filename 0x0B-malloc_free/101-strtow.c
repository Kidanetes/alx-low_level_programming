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
	int x = 1, i, j, k, length;
	char **strtow;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 1; str[i] != '\0'; i++)
	{
		if (str[i] == ' ' && str[i - 1] != ' ')
		{
			x++;
		}
	}
	x++;
	strtow = malloc(x);
	if (strtow == NULL)
		return (NULL);
	j = 0;
	i = 0;
	while (i < x)
	{
		length = 0;
		while (str[j]  != ' ' && str[j] != '\0')
		{
			if (str[j - 1] != ' ')
			{
				length++;
				j++;
			}
		}
		if (length != 0)
		{
			strtow[i] = malloc(length + 1);
			if (strtow[i] == NULL)
			{
				for (; i >= 0; i--)
					free(strtow[i]);
				free(strtow);
				return (NULL);
			}
			i++;
		}
		j++;
	}
	j = 0;
	for (i = 0; i < x; i++)
	{
		k = 0;
		while (*str != ' ' && *str != '\0')
		{
			strtow[i][k] = *str;
			str++;
			k++;
		}
		strtow[i][k] = '\0';
		while (*str == ' ')
			str++;
		i++;
	}
	return (strtow);
}
