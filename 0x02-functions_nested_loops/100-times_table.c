#include "main.h"
/**
 * print_times_table - print  multiplication table 0 - n
 * @n: input parameter
 * Return: nothing
 */
void print_times_table(int n)
{
	int i = 0;
	int j, prod,k;
	int tmp,status;

	if (n >= 0 && n <= 15)
	{
		while (i <= n)
		{
			j = 0;
			while (j <= n)
			{
				prod = i * j;
				if (j == 0)
					_putchar('0');
				else
				{
					k = 100;
					status = 0;
					_putchar(' ');
					while (k >= 1)
					{ 
						if (prod / k == 0 && status == 0)
							_putchar(' ');
						else
							status = 1;
						_putchar('0' + (prod / k));
					        prod = prod % k;
					}
				}
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
