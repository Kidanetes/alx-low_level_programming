#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int count =  1;
	long sum = 1, prev = 0,tmp;

	while (count <= 50)
	{
		tmp = sum;
		sum = sum + prev;
		if (count < 50)
			printf("%d, ", sum);
		else
			printf("%d", sum);
		prev = tmp;
		count++;
	}

	return (0);
}
