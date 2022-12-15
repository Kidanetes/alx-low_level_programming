#include "main.h"
/**
 * print_triangle - print a triangle
 * @size: input parameter
 * Return: void
 */
void print_triangle(int size)
{
	int count1 = 0;
	int count2;

	while (count1 < size)
	{
		count2 = 0;
		while (count2 < (size - count1 - 1))
		{
			_putchar(' ');
			count2++;
		}
		count2 = 0;
		while (count2 <= count1)
		{
			_putchar('#');
			count2++;
		}
		_putchar('\n');
		count1++;
	}
	if (size <= 0)
		_putchar('\n');
}
