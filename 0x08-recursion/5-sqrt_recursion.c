#include "main.h"
/**
 * _sqrt_recursion -finds natural square root of a number
 * @n: input parameter
 * Return: number
 */
int _sqrt_recursion(int n)
{
	return (sqrt_recursion(n, 1));
}
/**
 * sqrt_recursion - finds square root of a number
 * @n: input parameter 1
 * @m: input parameter 2
 * Return: number
 */
int sqrt_recursion(int n, int m)
{
	if (n < 0 || m * m > n)
	{
		return (-1);
	}
	else
	{
		if (m * m == n)
			return (m);
		return (sqrt_recursion(n, m + 1));
	}
}
