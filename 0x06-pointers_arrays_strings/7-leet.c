#include "main.h"
/**
 * leet - encodes the string
 * @s: input parameter
 * Return: String
 */
char *leet(char *s)
{
	int i = 0, j = 0, dif = 'a' - 'A';
	int code[] = {4, 3, 0, 7, 1};
	char str[] = {'A', 'E', 'O', 'T', 'L'};

	while (s[i])
	{
		j = 0;
		while (j < 5)
		{
			if (s[i] == str[j] || s[i] == str[j] + dif)
			{
				s[i] = code[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
