#include "main.h"
/**
 * _print_rev_recursion - print a reversed string
 * @s: input parameter
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
