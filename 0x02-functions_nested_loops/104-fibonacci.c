#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0;
 */
int main(void)
{
	unsigned long now = 1, prev = 0, tmp;
	int count = 0;

	while (count < 99)
	{
		tmp =  now;
		now = now + prev;
		if (count < 98)
		{
			if (now <= 4294967295)
				printf("%lu, ", now);
			else
			{
				printf("%lu", now / 1000000000);
				printf("%lu, ", now % 1000000000);
			}
		}
		else
		{
			printf("%lu", now / 1000000000);
			printf("%lu\n", now % 1000000000);
		}
		prev = tmp;
		count++;
	}

	return (0);
}

