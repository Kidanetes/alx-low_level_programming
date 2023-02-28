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
	while (j < _strlen(n1) || j < _strleng(n2))
	{
		if (j >= _strlen(n1))
			res = res + *(n2 + _strlen(n2) - 1 - j) - '0';
		else if (j >= _strlen(n2))
			res = res + *(n1 + _strlen(n1) - 1 - j) - '0';
		else
			res = res + *(n1 + _strlen(n1) - 1 - j) +  *(n2 + _strlen(n2) - 1 - j) - '0' - '0';
		*(r + j) = res %  10;
		res = res / 10;
		j++;
	}
	if (j == size_r - 1 && res == 1)
		return (0);

	return (rev_string(r));
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
/**
 * rev_string - revrese a string
 * @s: input parameter
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	int tmp;
	int length;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	length = i;

	for (i = 0, j = length - 1; i <= j ; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}

