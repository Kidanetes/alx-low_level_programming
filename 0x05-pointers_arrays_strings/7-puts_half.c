#include "main.h"
/**
 * puts_half - prints a half a string
 * @str: input parameter
 * Return: void
 */
void puts_half(char *str)
{
	int i, length;

  for (i = ; *(str + i) != '\0'; i++)
	{
  }
  length = i;

	for (i = (length - 1) / 2; i < length; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
