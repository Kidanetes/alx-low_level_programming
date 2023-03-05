#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments
 * @ac: number of arguments
 * @av: arguments
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int i = 0, size = 0, j, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			size++;
			j++;
		}
		size++;
	}
	size++;
	str = malloc(size);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			str[k] = *av[i];
			k++;
			j++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
