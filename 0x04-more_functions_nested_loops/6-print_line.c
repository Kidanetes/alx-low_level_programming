#include "main.h"
/**
 * print_line - prints a line followed by 
 * new line
 * @n: input parameter
 * Return: void
 */
void print_line(int n)
{
	int count = 0;

	while (count < n)
	{
		_putchar('_');
		count++;
	}
	_putchar('\n');
}
