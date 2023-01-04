#include "main.h"
/**
 * _print_rev_recursion - print a reversed string
 * @s: input parameter
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int status = 0;
	char* start = s;

	if (*s == '\0')
	{
		status = 1;
		s--;
		_print_rev_recursion(s);
	}
	else if (status == 1 && *s >= *start)
	{
		_putchar(*s);
		s--;
		_print_rev_recursion(s);
	}
	else if (status == 0 && *s != '\0')
	{
		s++;
		_print_rev_recursion(s);
	}
	else
	{
		return;
	}
}
