#include "main.h"
/**
 * puts_half - prints a half a string
 * @str: input parameter
 * Return: void
 */
void puts_half(char *str)
{
	int i, length;
	for (i = 0; *(str + i) != '\0'; i++)
	{
	}
	length = i;
	for (i = length / 2; i < length; i++)
	{
		if (length % 2 != 0 && i = length / 2)
			continue;
		_putchar(*(str + i));
	}
	_putchar('\n');
}
