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
	int i = 0, size = 0, j = 0;
	char *str, *tmp;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++)
	{
		while (*av[i] != '\0')
		{
			size++;
			av[i]++;
		}
		size++;
	}
	size++;
	str = malloc(size);
	if (str == NULL)
		return (NULL);
	tmp = str;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (*av[i] != '\0')
		{
			*str = av[i][j];
			str++;
			j++;
		}
		*str = '\n';
		str++;
	}
	*str = '\0';
	return (tmp);
}	
