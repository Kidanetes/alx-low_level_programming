#include "main.h"
/**
 * print_sign - checks wheter n is postive, negative or zero
 * @n: is an input parameter
 *
 * Return: 1 if n is positive, 0 if n is zero, or -1 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
