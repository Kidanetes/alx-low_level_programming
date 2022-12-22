#include "main.h"
/**
 * rot13 - encode the string using
 * rot13 method
 * @s: input parameter
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i])
	{
		if ((s[i] >= 'A' && s[i] <= 'M') || (s[i] >= 'a' && s[i] <= 'm'))
		{
			s[i] = s[i] + 13;
		}
		else if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
		{
			s[i] = s[i] - 13;
		}
		else
		{
		}
		i++;
	}
	return (s);
}
