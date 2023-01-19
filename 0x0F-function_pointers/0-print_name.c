#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print a name
 * @name: input parameter 1
 * @f: input parameter 2
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL && name != NULL)
		f(name);
}
