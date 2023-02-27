#include "main.h"
/**
 * print_number - print a number
 * only using _putchar
 * @n: input parameter
 * Return: void
 */
void print_number(int n)
{
	int count = 0;
	int base;
	int status = 0;
	int tmp;

	float base1 = 0.1;

	if (n < 0)
	{
		_putchar('-');
		if (n != -2147483648)
		{
			n = -1 * n;
		}
		else
		{
			n = -1 * (n + 1);
			status = 1;
		}
	}
	if (n <= 9)
	{
		_putchar('0' + n);
	}
	else
	{
		printl(n, count, status);	
	}
}
/**
 * printl - print large numbers
 * @n: input parameter
 * @count: input parameter
 * @status: input parameter
 * Return: nothing
 */
void printl(int n, int count, int status)
{
	float base = 0.1;
	int tmp, base;
	
	tmp = n;
	while (tmp > 0)
	{
		tmp = tmp / 10;
		count++;
		base1 = base1 * 10.0;
	}
	base = (int) base1;
	while (count > 0)
	{
		if ((count == 1) && (status == 1))
		{
			_putchar('0' + (n / base + 1));
		}
		else
		{
			_putchar('0' + (n / base));
		}
		n = n % base;
		base = base / 10;
		count--;
	}
}
