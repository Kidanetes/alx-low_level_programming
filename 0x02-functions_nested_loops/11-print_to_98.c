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
	int status;

	while (n < 98 || n > 98)
	{
		tmp = n;
		status = 0;
		if (tmp < 0)
		{
			_putchar('-');
			tmp = -tmp;
		}
		if ((tmp / 100) != 0)
		{
			_putchar('0' + (tmp / 100));
			tmp = tmp % 100;
			status = 1;
		}
		if ((tmp / 10) != 0 || status == 1)
			_putchar('0' + (tmp / 10));
		_putchar('0' + (tmp % 10));
		_putchar(',');
		_putchar(' ');
		if (n < 98)
			n++;
		if (n > 98)
			n--;
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
