#include "main.h"
/**
 * _sqrt_recursion -finds natural square root of a number
 * @n: input parameter
 * Return: number
 */
int _sqrt_recursion(int n)
{
	retun (sqrt_recursion(n, n));
}
/**
 * sqrt_recursion - finds square root of a number
 * @n: input parameter 1
 * @m: input parameter 2
 * Return: number
 */
int sqrt_recursion(int n, int m)
{
	int x = n;
	if (m == 0)
	{
		return (-1);
	}
	else
	{
		if (x * x == n)
			return (x);
		x = sqrt_recursion(n, m - 1);
	}
}
