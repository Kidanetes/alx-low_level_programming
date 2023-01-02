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
	int status;

	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			*haystack = haystack[i];
			i++;
			j++;
			while (needle[j] == haystack[i] && needle[j] != '/0')
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
				return (haystack);
		}
		i++;
	}
	return ('\0');
}

