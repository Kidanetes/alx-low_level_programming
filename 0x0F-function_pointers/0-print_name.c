#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: input parameter 1
 * @f: input parameter 2
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
