#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int count =  1;
	unsigned long sum = 1, prev = 0, tmp;

	while (count <= 50)
	{
		tmp = sum;
		sum = sum + prev;
		if (count < 50)
			printf("%ld, ", sum);
		else
			printf("%ld", sum);
		prev = tmp;
		count++;
	}
	printf("\n");

	return (0);
}
