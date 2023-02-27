#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0;
 */
int main(void)
{
	int count = 0, status = 0;
	unsigned long tmp, now1 = 0, now2 = 1, prev1 = 0, prev2 = 0;

	while (count < 98)
	{
			now1 = now1 + prev1;
			prev1 = now1 - prev1;
			now2 = now2 + prev2;
			prev2 = now2 - prev2;
			if ((now1 + (now2 / 1000000000000)) != 0)
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
