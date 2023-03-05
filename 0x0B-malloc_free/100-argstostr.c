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
	int i = 1, size = 0;
	char *str, *tmp;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; i < ac; i++)
	{
		while (*av[i] != '\0')
			size++;
		size++;
	}
	size++;
	str = malloc(size);
	if (str == NULL)
		return (NULL);
	tmp = str;
	for (i = 0; i < ac; i++)
	{
		while (*av[i] != '\0')
		{
			*str = **av;
			str++;
			av[i]++;
		}
		*str = '\n';
		str++;
	}
	*str = '\0';
	return (tmp);
}	
