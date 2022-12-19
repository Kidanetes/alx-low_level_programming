#include "main.h"
/**
 * _atoi -  convert a string into a character
 * @s: input parameter
 * Return: int
 */
int _atoi(char *s)
{
	int tmp = 0;
	int i = 0;
	int status = 1;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			status = -1 * status;
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (status == -1)
				tmp = 10 * tmp - ((int) s[i] - (int)'0');
			else
				tmp = 10 * tmp - ((int) s[i] - (int)'0');
			if (s[i+1] < '0' || s[i+1] > '9')
				break;
		}
		i++;
	}
	return tmp;
}

