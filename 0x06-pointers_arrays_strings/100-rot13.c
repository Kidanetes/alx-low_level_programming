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
		while ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
		{
			if ((s[i] >= 'N' && s[i] <= 'Z') || (s[i] >= 'n' && s[i] <= 'z'))
			{
				s[i] = s[i] - 13;
				break;
			}
			s[i] = s[i] + 13;
			break;
		}
		i++;
	}
	return (s);
}
