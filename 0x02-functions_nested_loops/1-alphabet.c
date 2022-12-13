#include "main.h"
/**
 * print_alphabet - it prints lowercase alphabet letters
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	int count = 0;
	char lowercase = 'a';

	while (count < 26)
	{
		_putchar(lowercase);
		lowercase++;
		count++;
	}
	_putchar('\n');
}
