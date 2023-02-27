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

	while (count < 100)
	{
		tmp =  now;
		now = now + prev;
		if (count < 99)
			printf("%lu, ", now);
		else
			printf("%lu\n", now);
		prev = tmp;
		count++;
	}

	return (0);
}

