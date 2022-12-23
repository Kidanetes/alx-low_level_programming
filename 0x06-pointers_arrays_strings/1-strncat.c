#include "main.h"
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
