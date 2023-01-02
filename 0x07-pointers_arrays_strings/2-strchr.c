#include "main.h"
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
	return (s);
}
