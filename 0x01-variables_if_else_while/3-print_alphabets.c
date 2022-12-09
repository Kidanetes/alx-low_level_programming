#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerCase = 'a';
	char upperCase = 'A';
	int counter = 0;

	while (counter < 26)
	{
		putchar(lowerCase);
		lowerCase++;
		counter++;
	}

	counter = 0;

	while (counter < 26)
	{
		putchar(upperCase);
		upperCase++;
		counter++;
	}
	putchar('\n');

	return (0);
}
