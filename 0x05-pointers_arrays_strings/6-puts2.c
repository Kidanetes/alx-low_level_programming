#include "main.h"
/**
 * _puts2 - prints a every other caracter of
 * a string
 * @str: input parameter
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *(str + i) != '\0'; i = i + 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
