#include "main.h"
/**
 * _memset -  fills memory with a constant byte
 * @s: input parameter
 * @b: input parameter
 * @n: input parameter
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
