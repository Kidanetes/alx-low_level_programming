#include "main.h"
/**
 * _strpbrk - searches a substring
 * @s: input parameter
 * @accept: input parameter
 * Return: pointer to substring
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s != '\0')
	{
		accept = start;
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}
	return ('\0');
}
