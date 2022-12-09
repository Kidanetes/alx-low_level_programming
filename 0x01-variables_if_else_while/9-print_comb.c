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
		if (counter == 9)
		{
			putchar('0' + counter);
		}
		putchar('0' + counter);
	        putchar(',');
		putchar(' ');
	}
	putchar('\n');
}	
