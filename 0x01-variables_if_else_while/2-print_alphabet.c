#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char letter = 'a';
	int counter = 0;

	while (counter < 26)
	{
		putchar(letter);
		counter++;
		letter++;
	}
	putchar('\n');

	return (0);
}
