#include "variadic_functions.h"
/**
 * print_all - print all kinds of format
 * @format: input parameter
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	char *tmp;
	int i = 0;
	
	va_start(arg, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c': 
				printf("%c", (char) va_arg(arg, int));
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				break;
			case 's':
				tmp = va_arg(arg, char *);
				if (tmp == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", tmp);
		}
		if ((format[i] == 'c' || format[i] == 'i' ||
		      format[i] == 'f' || format[i] == 's') && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg);
}
