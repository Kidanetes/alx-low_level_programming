#include "main.h"
/**
 * _strncpy - copies one string into another
 * @dest: input parameter
 * @src: input parameter
 * @n: input parameter
 * Return: the copied string
 */
 char *_strncpy(char *dest, char *src, int n)
 {
	int i, j ,length;
	for (i = 0; src[i] != '\0'; i++)
	{
	}
	length = ++i;
	if (n > length)
	{
		n = length;
	}
	for (j = 0; j < n; j++)
		dest[j] = src[j];

	return (dest);
}
