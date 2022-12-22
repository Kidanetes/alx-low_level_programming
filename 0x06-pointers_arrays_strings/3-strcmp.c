#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: input parameter
 * @s2: input parameter
 * Return: Integer
 */
int _strcmp(char *s1, char *s2)
{
	int num, i = 0;
	while (s1[i] == s2[i])
	{
		i++;
	}
	if (s1[i] == '\0' || s2[i] == '\0')
		num = 0;
	else
		num = s1[i] - s2[i];

	return (num);
}
