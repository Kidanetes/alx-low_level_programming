#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * strtow - split a string into words
 * @str: the string
 *
 * Return: double pointer
 */
char **strtow(char *str)
{
	int x = 0, i = 0, j, k, length;
	char **strtow;

	if (str == NULL || *str == '\0' || strcmp(str, " ") == 0)
		return (NULL);
	while (str[i] == ' ')
		i++;
	if (str[i] != ' ' && str[i] != '\0')
		x = 1;
	for (; str[i] != '\0'; i++)
	{
		
		if (str[i] == ' ')
		{
			if (str[i + 1] == ' ' || str[i + 1] == '\0')
				continue;
			x++;
		}
	}
	printf("x = %d", x);
	strtow = malloc((x + 1) * sizeof(char *));
	if (strtow == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (i < x)
	{
		length = 0;
		while (str[j] == ' ')
                	j++;
		k = j;
		while (str[k] != ' ' && str[k] != '\0')
		{
			length++;
			k++;
		}
		strtow[i] = malloc(length + 1);
		if (strtow[i] == NULL)
		{
			while (i--)
				free(strtow[i]);
			free(strtow);
			return (NULL);
		}
		k = 0;
		length = j + length;
		while (j < length)
		{
			strtow[i][k] = str[j];
			j++;
			k++;
		}
		strtow[i][k] = '\0';
		i++;
	}
	strtow[i] = NULL;
	return (strtow);
}
