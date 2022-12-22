#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: input parameter
 * @s2: input parameter
 * Return: Integer
 */
int _strcmp(char *s1, char *s2)
{
	int num;

	while (*s1 == *s2)
	{
		*s1++;
		*s2++;
	}
	num = *s1 - *s2;

	return (num);
}
