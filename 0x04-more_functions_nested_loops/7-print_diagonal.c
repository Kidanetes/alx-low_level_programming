#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: input parameter
 * Return: void
 */
void print_diagonal(int n)
{
	int count = 0;
	int count2;

	while (count < n)
	{
		count2 = 0;
		while (count2 < count)
		{
			_putchar(' ');
			count2++;
		}
		_putchar('\\');
		_putchar('\n');
		count++;
	}
	_putchar('\n');
}
