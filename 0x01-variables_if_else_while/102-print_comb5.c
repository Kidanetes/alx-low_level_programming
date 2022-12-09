#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(Success)
 */
int main(void)
{
	int number1 = 0;
	int number2;

	while (number1 < 99)
	{
		number2 = number1 + 1;
		while (number2 < 100)
		{
			putchar((number1 / 10) + '0');
			putchar((number1 % 10) + '0');
			putchar(' ');
			putchar((number2 / 10) + '0');
			putchar((number2 % 10) + '0');
			if(number1 != 98 || number2 != 99)
			{
				putchar(',');
				putchar(' ');
			}
			number2++;
		}
		number1++;
	}
		putchar('\n');

		return (0);
}

