#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit = '0';
	char lowercase = 'a';
	int counter = 0;

	while (counter < 16)
	{
		if (counter < 10 )
		{
			putchar(digit);
			digit++;
		}
		else
		{
			putchar(lowercase);
			lowercase++;
		}
		counter++;
	}
	putchar('\n');

	return (0);
}
