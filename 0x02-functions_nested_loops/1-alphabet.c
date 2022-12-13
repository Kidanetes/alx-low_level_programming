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
		-putchar(lowercase);
		count++;
	}
	-putchar('\n');
}
