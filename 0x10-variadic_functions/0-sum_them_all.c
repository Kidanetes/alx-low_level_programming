#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum all the arguments
 * @n: number of arguments
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i = 0;
	va_list arg;

	if (n == 0)
		return (0);
	va_start(arg,n);
	while (i < n)
	{
		sum = sum + va_arg(arg, int);
	}
	va_end(arg);
	return (sum);
}
