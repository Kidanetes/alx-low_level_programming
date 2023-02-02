#include "main.h"
/**
 * set_bit - set bit at index to 1
 * @n: number
 * @index: index of the bit
 * Return: bit at index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
