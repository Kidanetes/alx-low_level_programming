#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0;
 */
int main(void)
{
	int count = 0, status = 0;
	unsigned long now = 1, prev = 0, tmp, now1, now2, prev1, prev2;

	while (count < 98)
	{
		if (count <= 91)
		{
			tmp =  now;
			now = now + prev;
			printf("%lu, ", now);
			prev = tmp;
			count++;
		}
		if (count > 91)
		{
			if (status == 0)
			{
				prev1 = prev / 1000000000000;
				prev2 = prev % 1000000000000;
				now1 = now / 1000000000000;
				now2 = now % 1000000000000;
			}
			now1 = now1 + prev1;
			prev1 = now1 - prev1;
			now2 = now2 + prev2;
			prev2 = now2 - prev2;
			status = 1;
			printf("%lu", now1 + (now2 / 1000000000000));
			if (count < 97)
				printf("%lu, ", now2 % 1000000000000);
			else
				printf("%lu\n", now2 % 1000000000000);
			count++;
		}
	}

	return (0);
}
