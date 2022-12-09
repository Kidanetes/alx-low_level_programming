#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowercase = 'z';
	int counter = 0;

	while (counter < 26)
	{
		putchar(lowercase);
		lowercase--;
		counter++;
	}
	putchar('\n');

	return (0);
}

