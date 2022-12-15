#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	long long number = 612852475143;
	long long count = 2, count2, max = 612852475143;
	int status;

	while (count < number)
	{
		if (number % count == 0)
		{
			status = 0;
			count2 = 2;
			while (count2 < count)
			{
				if (count % count2 == 0)
				{
					status = 1;
					break;
				}
				count2++;
			}
			if (status == 0)
				max = count;
		}
		count++;
	}
	printf("%lu", max);
	putchar('\n');

	return (0);
}
