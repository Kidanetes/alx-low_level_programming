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

	while (count < 98)
	{
		tmp = (unsigned long) now;
		now = (unsigned long) now + (unsigned long) prev;
		if ( count < 97)
			printf("%ld, ", now);
		else
			printf("%ld", now);
		prev = tmp;
		count++;
	}

	return (0);
}

