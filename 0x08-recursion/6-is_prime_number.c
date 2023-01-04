#include "main.h"
/**
 * is_prime_number - checks wheter a number is
 * prime or not
 * @n: input parameter
 * Return: 1 if the number is prime,
 * 0, otherwise
 */
int is_prime_number(int n)
{
	return (prime(n, 2));
}
/**
 * prime - checks wheter a numebr is pime or not
 * @n: input parameter 1
 * @m: input paramete 2
 * Return: 1 if the number is prime,
 * 0, otherwise
 */
int prime(int n, int m)
{
	if (n <= 1 || n >= -1)
		return (0);
	if (n < 0)
		n = -n;
	if (n % m == 0 && m < n)
		return (0);
	if (n == m)
		return (1);
	return (prime(n, ++m));
}
