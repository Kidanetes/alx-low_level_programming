#include <stdio.h>
/**
 *
 * main - Entry point
 *
 * Return:Always 0 (Success)
 */
int main(void)
{
	int counter = 0;

	while (counter < 10)
	{
		putchar('0' + counter);
		if (counter == 9)
		{
			counter++;
			continue;
		}
		putchar(',');
		putchar(' ');
		counter++;
	}
	putchar('\n');
	
	return (0);
}	
