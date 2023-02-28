#include "main.h"
/**
 * _strpbrk - searches a substring
 * @s: input parameter
 * @accept: input parameter
 * Return: pointer to substring
 */
char *_strpbrk(char *s, char *accept)
{
	int  j;

	while (*s != 0)
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		s++;
	}
	return ('\0'); 
}
