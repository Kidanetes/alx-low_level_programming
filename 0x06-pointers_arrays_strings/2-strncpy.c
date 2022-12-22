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
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}
