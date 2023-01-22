#include "variadic_functions.h"
/**
 * print_numbers - print numbers
 * @separator: imput parameter
 * @n: number of arguments
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg;
	
	va_start(arg, n);
	while (i < n)
	{
		printf("%d",va_arg(arg, int));
		if (separator != NULL)
			printf("%s", separator);
		i++
	}
	printf("\n");
	va_end(arg);
}


