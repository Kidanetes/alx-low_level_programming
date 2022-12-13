#include "main.h"
/*
 * print_alphabet_x10 - uses _putchar to print the lower case alphabet letters
 * followed by newline 10 times
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int count1 = 0;
	int count2;
	char lowercase;

	while (count1 < 10)
	{
		count2 = 0;
		lowercase = 'a';
		while (count2 < 26)
		{
			_putchar(lowercase);
			lowercase++;
			count2++;
		}
		_putchar('\n');
		count1++;
	}

}
