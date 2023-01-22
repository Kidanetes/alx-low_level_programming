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
	int status;

	while (format != NULL && format[i] != '\0')
	{
		status = 0;
		switch (format[i])
		{
			case 'c': 
				printf("%c", (char) va_arg(arg, int));
				status = 1;
				break;
			case 'i':
				printf("%d", va_arg(arg, int));
				status = 1;
				break;
			case 'f':
				printf("%f", va_arg(arg, double));
				status = 1;
				break;
			case 's':
				tmp = va_arg(arg, char *);
				status = 1;
				if (tmp == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", tmp);
				break;
		}
		if (status == 1 && format[i + 1] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(arg);
}


