#include <stdio.h>
#include<math.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	unsigned long number = 612852475143;
	unsigned long count = 3, count2;
	unsigned long num = (int) sqrt(number);

	for (; count <= num; count++)
	{
		while (number % count == 0 && number != count)
			number /= count;
	}
	       printf("%lu\n", number );
	return (0);
}
