#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: input parameter
 * Return: void
 */
void print_triangle(int size)
{
	int count = size;
	int count2;

	while (count > 0)
	{
		count2 = 1;
		while (count2 < count)
		{
			_putchar(' ');
			count2++;
		}
		_putchar('#');
		_putchar('\n');
		count--;
	}
	if (size <= 0)
		_putchar('\n');
}
