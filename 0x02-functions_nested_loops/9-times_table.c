#include "main.h"
/**
 * times_table -  print  multiplication table 0 - 9
 *
 * Return: nothing
 */
void times_table(void)
{
	int i = 0;
	int j, product;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			product = i * j;
			if(product < 10)
			{
				_putchar(' ');
				_putchar('0' + product);	
			}
			else
			{
				_putchar('0' + (product / 10);
				_putchar('0' + (product % 10);
			}
			_putchar(',');
			_putchar(' ');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
			
