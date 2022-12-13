#include "main.h"
/**
 * print_last_digit - prints the last digit of n
 * @n: is an input parameter
 *
 * Return: digit
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		_putchar('0' + (-1 * (n % 10)));
		return (-1 * (n % 10));
	}
	else
	{
		_putchar('0' + (n % 10));
		return ((n % 10));
	}
	
	_putchar('\n');
}
