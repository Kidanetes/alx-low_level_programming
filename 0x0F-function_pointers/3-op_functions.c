#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - Addtion
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtraction
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplication
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - division
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: int
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - modules
 * @a: input parameter 1
 * @b: input parameter 2
 * Return: int
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("%s\n", "Error");
		exit(100);
	}
	return (a % b);
}
