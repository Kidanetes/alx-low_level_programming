#include <stdio.h>
/**
 * main - Entery point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int counter1 = 0;
	int counter2;
	int counter3;
	
	while (counter1 < 8)
	{
		counter2 = counter1 + 1;
		while ( counter2 < 9)
		{
			counter3 = counter2 + 1;
			while (counter3 < 10)
			{
				putchar(counter1 + '0');
				putchar(counter2 + '0');
				putchar(counter3 + '0');
				if (counter1 != 7 || counter2 != 8 || counter3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
				counter3++;
			}
			counter2++;
		}
		counter1++;
	}
	putchar('\n');

	return (0);
}	
