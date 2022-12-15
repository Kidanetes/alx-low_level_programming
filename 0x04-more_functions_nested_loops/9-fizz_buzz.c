#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int count = 1;

	while (count <= 100)
	{
		if (count % 3 == 0 && count % 5 == 0)
			printf("FizzBuzz");
		else if (count % 3 == 0)
			printf("Fizz");
		else if (count % 5 == 0)
			printf("Buzz");
		else
			printf("%d", count);
		if (count < 100)
			putchar(' ');
		count++;
	}
	putchar('\n');

	return (0);
}
