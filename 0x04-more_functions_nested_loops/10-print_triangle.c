#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: input parameter
 * Return: void
 */
void print_triangle(int size)
{
	int count = size - 1;
	int count2;

	while (count > 0)
	{
		count2 = 0;
		while (count2 < count)
		{
			_putchar(' ');
			count2++;
		}
		count2 = count; 
		while (count2 < size)
			_putchar('#');
		_putchar('\n');
		count--;
	}
	if (size <= 0)
		_putchar('\n');
}
