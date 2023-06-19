#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: input parameter
 * @src: input parameter
 * @n: input parameter
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *tmp = dest;

	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = tmp;
	return (dest);
}
/**
 * _strchr - locates the first
 * appereance of the caracter in a string
 * @s: input parameter
 * @c: input parameter
 * Return: Pointer
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return ('\0');
}
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
