#include "main.h"
/**
 * *infinite_add - add two numbers
 * @n1: parameter1
 * @n2: parameter2
 * @r: parameter3
 * @size_r: parameter4
 * Return: pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, res = 0;
	char tmp;

	if (size_r < _strlen(n1) && size_r < _strlen(n2))
	{
		return (0);
	}
	else
	{
		j = 0;
		while (n1[j] != '\0' || n2[j] != '\0')
		{
			res = res + n1[j] - '0' + n2[j] - '0';
			r[j] = (res % 10) + '0';
			res = res / 10;
			j++;
		}
		if (size_r - 1 < j)
			return (0);
		if (res != 0 && j < size_r)
		{
			r[j] = res + '0';
		}
	}
	j = 0;
	while (r[j] >= '0' && r[j] <= '9')
	{
		j++;
	}
	j--;
	for (i = 0; i <= j; i++, j--)
	{
		tmp = r[i];
		r[i] = r[j];
		r[j] = tmp;
	}	
	return (r);
}
/**
 * _strlen - returns the length of a string
 * @s: input parameter
 * Return: int
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}

	return (i);
}
