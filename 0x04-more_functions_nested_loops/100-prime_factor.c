#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int number = 612852475143;
	unsigned long int count = 2, count2, max = 1;
	int status;

	while (count <= (number / 2))
	{
		if (number % count == 0)
		{
			status = 0;
			count2 = 2;
			while (count2 <= (count / 2))
			{
				if (n % count == 0)
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
	printf("%lu\n", max);

	return (0);
}
