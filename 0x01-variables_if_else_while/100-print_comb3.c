#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int counter = 0;
	int counter2;

	while (counter < 10)
	{
		counter2 = counter + 1;
		while (counter2 < 10)
		{
			putchar('0' + counter);
			putchar('0' + counter2);
			if (counter == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
			counter2++;
		}
		counter++;
	}
	putchar('\n');

	return (0);
}
		
 
