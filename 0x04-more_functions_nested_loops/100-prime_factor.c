#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
        unsigned long int number = 612852475143;
	unsigned long int count = number / 2, count2, max = 612852475143;
	int status;

	while (count >= 2)
	{
		if (number % count == 0)
		{
			status = 0;
			count2 = 2;
			while (count2 <= count / 2)
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
		count--;
	}
	       printf("%lu\n", max);
	return (0);
}
