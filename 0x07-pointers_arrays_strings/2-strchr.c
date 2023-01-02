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
	char *tmp;

	while (*s)
	{
		if (*s == c)
		{
			tmp = s;
			return (tmp);
		}
		s++;
	}
	return ('\0');
}
