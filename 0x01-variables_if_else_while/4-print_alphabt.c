#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 *
 */

int main(void)
{
	char lowercase = 'a';
	int counter = 0;

	while (counter < 26)
	{
		if (lowercase == 'e' || lowercase == 'q')
		{
			lowercase++;
			counter++;
			continue;
		}
		putchar(lowercase);
		lowercase++;
		counter++;
	}
	putchar('\n');

	return (0);
}

