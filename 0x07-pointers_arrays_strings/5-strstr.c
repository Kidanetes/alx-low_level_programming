#include "main.h"
/**
 * _strstr -  locates a substring
 * @haystack: input parameter
 * @needle: input parameter
 * Return: pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *tmp, *tmp2; 

	while (*haystack != '\0')
	{
		tmp = needle;
		tmp2 = haystack;
		while (*haystack == *tmp)
		{
			haystack++;
			tmp++;
		}
		if (*tmp == '\0')
			return (tmp2);
		haystack++;
	}
	return ('\0');
}
