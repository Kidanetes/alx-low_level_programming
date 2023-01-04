#include "main.h"
/**
 * _pow_recursion - returns yth power of x
 * @x: input parameter 1
 * @y: input parameter 2
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x - 1, y - 1));
}
