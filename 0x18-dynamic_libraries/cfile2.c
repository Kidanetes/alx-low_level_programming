#include "main.h"

/**
 * _isdigit - checks wheter a character is digit or not
 * @c: is an input parameter
 * Return: 1 if c is digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
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
 * _puts - prints a string
 * @str: input parameter
 * Return: void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
/**
 * _strcpy - copies one string into another
 * @src: input parameter
 * @dest: input parameter
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; ; i++)
	{
		dest[i] = src[i];
		if (src[i] ==  '\0')
		{
			dest[i] = src[i];
			break;
		}
	}
	return (dest);
}
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
				tmp = 10 * tmp + ((int) s[i] - (int)'0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
		}
		i++;
	}
	return (tmp);
}
