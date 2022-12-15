#include "main.h"
/**
 * more_numbers -  print from 0 to 14, 10 times
 *
 * Return: void
 */

void more_numbers(void)
{
	int count = 0;
	int count2;

	while (count < 10)
	{
		count2 = 0;
		while (count2 < 15)
		{
			if(count2 > 9)
				_putchar('0' + (count2 / 10));
			_putchar('0' + (count2 % 10));
			count2++;
		}
		_putchar('\n');
		count++;
	}
}

