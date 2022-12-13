#include "main.h"
/**
 * print_times_table - print  multiplication table 0 - n
 * @n: input parameter
 * Return: nothing
 */
void print_times_table(int n)
{
	int i = 0;
	int j,k,prod;
	int status;

	while (i <= n && n >= 0 && n <= 15)
	{
		j = 0;
		while (j <= n)
		{
			prod = i * j;
			k = 100; 
			status = 0;
			if (prod == 0)
				{
					_putchar('0');
					status++;
				}
			else
			{
				while(k >= 1)
				{
				
			   		if (prod / k != 0 || status > 0 )
					{
						_putchar('0' + (prod / k));
						prod = prod % 10;
						status++;
					}
					k /= 10;
				}
			}
			if (j < n)
				_putchar(',');
			while (status < 4 && j < n)
			{ 
				_putchar(' ');
				status++;
			}
			j++;
		}
		if (i < n)
			_putchar('\n');
		i++;
	}
}
