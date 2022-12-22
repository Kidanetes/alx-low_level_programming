#include "main.h"
/**
 * print_number - print a number
 * @n: input parameter
 * Return: void
 */
void print_number(int n)
{
	int number_digts = 0;
	int weight;
	int status = 0;
	int tmp;
	float weight_ = 0.1;

	if (n < 0)
	{
		_putchar('-');
		if (n == -2147483648)
		{
			n = -1 * (n + 1);
			status = 1;
		}
		else
		{
			n = -1 * n;
		}
	}
	if (n <= '9')
	{
		_putchar('0' + n);
	}
	else
	{
		tmp = n;
		while (tmp > 0)
		{
			tmp = tmp / 10;
			number_digts++;
			weight_ = weight_ * 10.0;
		}
		weight = (int) weight_;

		while (number_digts > 0)
		{
			if ((number_digts == 1) && (status == 1))
			{
				_putchar('0' + (n / weight + 1));
			}
			else
			{
				_putchar('0' + (n / weight));
			}
			n = n % weight;
			weight = weight / 10;
			number_digts--;
		}
	}
}
