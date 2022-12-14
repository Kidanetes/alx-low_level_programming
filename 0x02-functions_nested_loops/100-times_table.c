#include "main.h"
/**
 * print_times_table - print  multiplication table 0 - n
 * @n: input parameter
 * Return: nothing
 */
void print_times_table(int n)
{
	int i = 0, j, prod;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				prod = i * j;
				if ( j == 0)
					_putchar('0');
				else
					format(prod);
				if (j < n)
					_putchar(',');
					
				j++;
			}
			if (i < n)
				_putchar('\n');
			i++;
		}
                _putchar('\n');
	}
}
void format(int n) 
{
	int tmp;
	
	if (n > 99)
	{
		_putchar(' ');
		_putchar('0' + (n / 100));
		tmp = n % 100;
		_putchar('0' + (tmp / 10));
		_putchar('0' + (tmp % 10));
	}
	else if (n > 9)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + (n / 10));
		_putchar('0' + (n % 10));
	}
	else
	{
	_putchar(' ');
	_putchar(' ');
	_putchar(' ');	
	_putchar('0' + (n % 10));
	}
}
