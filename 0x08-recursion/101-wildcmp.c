#include "main.h"
/**
 * wildcmp - compares twp strings
 * @s1: input parameter 1
 * @s2: input parameter 2
 * Return: int (0 or 1)
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
	{
		return (wildcmp(s1, ++s2) || wildcmp(++s1, s2));
	}
	if (*s1 == *s2)
	{
		return (wildcmp(++s1, ++s2));
	}
	if (*(s2 - 1) == '*' && *s1 != *s2)
	{
		return (wildcmp(++s1, s2));
	}
	return (0);
}


