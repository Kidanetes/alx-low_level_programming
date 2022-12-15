#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int number = 612852475143;
	unsigned long int count = 2, max ;
	int status;

	while (count <= (number / 2))
	{
		status = 0;
		if (number % count == 0)
		{
			status = check_prime(count);
			if (status == 1)
				max = count;
		}
		count++;
	}
	printf("%d", max);

	return (0);
}
/**
 * check_prime - cheks wheter a  number is 
 * prime or not
 * @n: input parameter
 * Return: 1 if n is prime, 0 otherwise
 */

int check_prime(unsigned longint n)
{
	unsigned long int count = 2;
	int status = 0;

	while (count <= (n / 2))
	{
		if (n % count == 0)
		{
			status = 1;
			break;
		}
		count++;
	}
	if (status == 0)
		return (1);
	else
		return (0);
}

		
