#include "main.h"
/**
 * _print_rev_recursion - print a reversed string
 * @s: input parameter
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	char *start = s;
	char *final;

	if (*start == '\0')
	{
		return;
	}
	if (*s)
	{
		s++;
		_print_rev_recursion(s);
	}
	else
	{
		final = s;
		final--;
	}
	if (final != '\0')
	{
		_print_rev_recursion(s);
		final--;
	}
}
