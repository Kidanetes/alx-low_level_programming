#include "main.h"
/**
 * _strcat - concatenates two strings into one
 * @dest: input parameter
 * @src: input parameter
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * _strncat - concatenates two strings into one
 * @dest: input parameter
 * @src: input parameter
 * @n: input parameter
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int length1, length2, i;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	length1 = i;
	for (i = 0; src[i] != '\0'; i++)
	{
	}
	length2 = i;
	for (i = length1; i < length1 + n && i < length1 + length2; i++)
	{
		dest[i] = src[i - length1];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * _strncpy - copies one string into another
 * @dest: input parameter
 * @src: input parameter
 * @n: input parameter
 * Return: the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, j, length;

	for (i = 0; src[i]; i++)
	{
	}
	length = ++i;
	if (n > length)
	{
		for (i = length; i < n; i++)
		{
			dest[i] = '\0';
		}
		n = length;
	}
	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}

	return (dest);
}

/**
 * _strcmp - compares two strings
 * @s1: input parameter
 * @s2: input parameter
 * Return: Integer
 */
int _strcmp(char *s1, char *s2)
{
	int num = 0;
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	num = s1[i] - s2[i];

	return (num);
}

/**
 * _memset -  fills memory with a constant byte
 * @s: input parameter
 * @b: input parameter
 * @n: input parameter
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *tmp = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	s = tmp;
	return (s);
}

