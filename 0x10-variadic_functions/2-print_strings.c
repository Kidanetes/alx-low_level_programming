#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @separator: input parameter
 * @n: number of arguments
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list arg;
	char *tmp;

	va_start(arg, n);
	while (i < n)
	{
		tmp = va_arg(arg, char *);
		if (tmp == NULL)
			printf("(nil)");
		else
			printf("%s", tmp);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(arg);
}
