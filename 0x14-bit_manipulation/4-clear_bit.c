#include "main.h"
/**
 * clear_bit - set bit at index to 0
 * @n: number
 * @index: index of the bit
 * Return: bit at index
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
