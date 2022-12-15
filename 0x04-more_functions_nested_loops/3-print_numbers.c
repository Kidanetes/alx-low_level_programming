#include "main.h"

/**
 * print_numbers - prints from 0 to 9
 * followed by new line
 * Return: void
 */

void print_numbers(void)
{
	int count = 0;
	char digit = '0';

	for (; count < 10; count++)
	{
		_putchar(digit);
		digit++;
	}
	_putchar('\n');
}
