#include "main.h"
/*
 * print_alphabet_x10: prints the lower case alphabet letter 10 times.
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
