#include "main.h"
/**
 * print_times_table - print  multiplication table 0 - n
 * @n: input parameter
 * Return: nothing
 */
void print_times_table(int n)
{
	int i = 0, j, prod,tmp;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				prod = i * j;
				_putchar(' ');
				if (prod > 99)
				{
					_putchar('0' + (prod / 100));
					tmp = prod % 100;
					_putchar('0' + (tmp / 10));
				}
				else if (prod > 9)
				{
					_putchar(' ');
					_putchar('0' + (prod / 10));
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar('0' + (prod % 10));
				j++;
			}
			if (i < n)
				_putchar('\n');
			i++;
		}
                _putchar('\n');
	}
}
