#include "main.h"
/**
 * rot13 - encode the string using
 * rot13 method
 * @s: input parameter
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i = 0, j;

	while (s[i])
	{
		j = 0;
		while (((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm')) && j < 1)
		{
			s[i] = s[i] + 13;
			j++;
		}
		if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
		{
			s[i] = s[i] + 13;
		}
		i++;
	}
	return (s);
}
