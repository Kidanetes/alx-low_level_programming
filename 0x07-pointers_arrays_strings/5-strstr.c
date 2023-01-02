#include "main.h"
/**
 * _strstr -  locates a substring
 * @haystack: input parameter
 * @needle: input parameter
 * Return: pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	chat *tmp1 = haystack, *tmp2 = needle;

	while (*haystack)
	{
		tmp1 = haystack;
		tmp2 = needle;
		while (*haystack == *tmp2)
		{
			haystack++;
			tmp2++;
		}
		if (*tmp2 == '\0')
			return (tmp1);
		haystack = tmp1 + 1;
	}
	return ('\0');
}

