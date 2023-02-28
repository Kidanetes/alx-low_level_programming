#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input parameter
 * @accept: input parameter
 * Return: length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, status;

	while (s[i] != '\0')
	{
		j = 0;
		status = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				status = 1;
				break;
			}
			j++;
		}
		if (status == 0)
			break;
		i++;
	}
	return (i);
}
