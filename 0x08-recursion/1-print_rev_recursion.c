#include "main.h"
/**
 * _print_rev_recursion - print a reversed string
 * @s: input parameter
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int status = 0;
	char *start = s;

	if (*start == '\0')
	{
		return;
	}

	if (*s != '\0' && status == 0)
	{
		s++;
		_print_rev_recursion(s);
	}
	else if (*s == '\0' && status == 0)
	{
		status = 1;
		s--;
		_print_rev_recursion(s);
	}
	else if (status == 1 && start != s) 
	{
		_putchar(*s);
		s--;
		_print_rev_recursion(s);
	}
	else if (status == 1 && start == s)
	{
		_putchar(*s);
		*start == '\0';
	}
	else
		return;
		
}
