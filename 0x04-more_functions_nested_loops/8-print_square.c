#include "main.h"
/**
 * print_square - print a square
 * @size: input parameter
 * Return: void
 */
void print_square(int size)
{
	int count = 0;
	int count2;

	while (count < size)
	{
		count2 = 0;
		while (count2 < size)
		{
			_putchar('#');
			count2++;
		}
		_putchar('\n');
		count++;
	}
	if (size <= 0)
		_putchar('\n');
}
