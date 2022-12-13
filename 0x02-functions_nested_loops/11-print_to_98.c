#include "main.h"
/**
 * print_to_98 -  prints from n to 98
 * @n: input parameter
 *
 * Return: nothing
 */
void print_to_98(int n)
{
	int tmp;
	
	while (n < 98)
	{
		tmp = n;
		if (tmp < 0)
		{
			_putchar('-');
			tmp = -tmp;
		}
		if ((tmp / 100) != 0)
		{
			_putchar('0' + (tmp / 100));
			tmp = tmp % 100;
		}
		if ((tmp / 10) != 0)
			_putchar('0' + (tmp / 10));
		_putchar('0' + (tmp % 10));
		_putchar(',');
		_putchar(' ');
		n++;
	}
	while (n > 98)
	{
		if ((tmp / 100) != 0)
		{
			_putchar('0' + (tmp / 100));
			tmp = tmp % 100;
		}
		if ((tmp / 10) != 0)
			_putchar('0' + (tmp / 10));
		_putchar('0' + (tmp % 10));
		_putchar(',');
		_putchar(' ');
		n--;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}

