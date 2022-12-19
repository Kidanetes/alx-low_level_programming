#include "main.h"
/**
 * print_rev - prints revrese of a string
 * @s: input parameter
 * Return: void
 */
void print_rev(char *s)
{
	int length, i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
  	length = i;
	for (i = 0; i < length; i++)
	{
		_putchar(*(s + (length - 1- i)));
	}
	_putchar('\n');
}
