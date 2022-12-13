#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0;
 */
int main(void)
{
	int tmp, sum = 0, now = 1, prev = 0;
	while (sum <= 4000000)
	{
		tmp = now;
		if ( now % 2 == 0)
			sum = sum + now;
		now = now + prev;
		prev = tmp;
	}
	printf("%d\n",sum);

	return (0);
}

