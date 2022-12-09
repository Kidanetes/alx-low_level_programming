#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char digit = '0';
	int counter = 0;

	while (counter < 10)
	{
		putchar(digit);
		digit++;
		counter++;
	}
	putchar('\n');

	return (0);
}
