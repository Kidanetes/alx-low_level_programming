#include "main.h"
/**
 * print_binary - print binary number
 * @n: base 10 number
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	unsigned long int base = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		while (base <= n)
		{
			base = base * 2;
		}
		if (base > n)
			base = base >> 1;
		while (base != 0)
		{
			if (n >= base)
			{
				_putchar('1');
				n = n - base;
			}
			else
				_putchar('0');
			base = base >> 1;
		}
	}
}
