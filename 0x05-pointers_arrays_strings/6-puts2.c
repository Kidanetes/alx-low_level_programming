#include "main.h"
/**
 * puts2 - prints a every other caracter of
 * a string
 * @str: input parameter
 * Return: void
 */
void puts2(char *str)
{
	/*int i;*/

	/*for (i = 0; *(str + i) != '\0'; i++)*/
	/*{*/
	/*	if (i % 2 != 0)*/
	/*		continue;*/
	/*	_putchar(*(str + i));*/
	/*}*/
	while (*str != 0)
	{
		_putchar(*str);
		if (*(str + 1) == '\0')
			break;
		str = str + 2;

	}
	_putchar('\n');
}
