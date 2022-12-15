#include "main.h"
/**
 * print_square - print a square
 * @n: input parameter
 * Return: void
 */
void print_square(int size)
{
	int count = 0;
	int count2;

	while (count < n)
	{
		count2 = 0;
		while (count2 < n)
		{
			_putchar('#');
			count2++;
		}
		_putchar('\n');
		count++;
	}
	if (n <= 0)
		_putchar('\n');
}
