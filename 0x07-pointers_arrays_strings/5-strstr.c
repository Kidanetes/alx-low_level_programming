#include "main.h"
/**
 * _strstr -  locates a substring
 * @haystack: input parameter
 * @needle: input parameter
 * Return: pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0;
	chat *tmp;

	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			tmp = haystack[i];
			i++;
			j++;
			while (needle[j] == haystack[i] && needle[j] != '/0')
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return (tmp);
		}
		i++;
	}
	return ('\0');
}

