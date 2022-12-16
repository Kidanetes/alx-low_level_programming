#include "main.h"
/**
 * print_number - print a number
 * only using _putchar
 * @n: input parameter
 * Return: void
 */

void print_number(int n)
{
	int count = 0;
	int base = 1;
	int tmp;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}

	if (n <= 9)
		_putchar('0' + n);
	else
	{
		tmp = n;
		while (tmp > 0)
		{
			tmp = tmp / 10;
			count++;
			base = base * 10;
		}
		base = base / 10;
		while (count > 0)
		{
			_putchar('0' + (n / base));
			n = n % base;
			base = base / 10;
			count--;
		}
	}
}
