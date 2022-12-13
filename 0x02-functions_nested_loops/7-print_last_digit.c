#include "main.h"
/**
 * print_last_digit - prints the last digit of n
 * @n: is an input parameter
 *
 * Return: digit
 */
int print_last_digit(int n)
{
	char c = 0 + (n % 10);
	_putchar(c);
	return (n % 10);
	_putchar('\n');
}
