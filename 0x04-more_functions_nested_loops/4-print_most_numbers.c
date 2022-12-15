#include "main.h"

/**
 * print_most_numbers - print digts except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int count;
	char digit = '0';

	for (count = 0; count < 10; count++)
	{
		if (digit == '2' || digit == '4')
		{
			digit++;
			continue;
		}
		_putchar(digit);
		digit++;
	}
	_putchar('\n');
}
