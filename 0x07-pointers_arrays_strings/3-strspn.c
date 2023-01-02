#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input parameter
 * @accept: input parameter
 * Return: length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0, k = 0, i = 1;

	while (accept[j] != '\0')
	{
		while (s[k] != '\0')
		{
			if (s[k] == accept[j])
			{
				if (i < k)
					i = k;
			}
			k++;
		}
		j++;
	}
	return (k + 1);
}
