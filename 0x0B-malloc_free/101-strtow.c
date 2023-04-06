#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * strtow - split a string into words
 * @str: the string
 *
 * Return: double pointer
 */
char **strtow(char *str)
{
	int x = 0, i = 0;
	char **strtow;

	if (str == NULL || *str == '\0')
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
	strtow = malloc((x + 1) * sizeof(char *));
	if (x == 0)
		strtow = NULL;
	if (strtow == NULL)
		return (NULL);
	return (_strtow(strtow, str, x));
}
/**
 * _strtow - split the string into words
 * @strtow: parameter 1
 * @str: parameter2
 * @x: parameter 3
 * Return: pointer to pointers of words
 */
char **_strtow(char **strtow, char *str, int x)
{
	int i = 0, j = 0, k, length;

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
