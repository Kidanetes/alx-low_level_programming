#include "main.h"
/**
 * set_bit - set bit at index to 1
 * @n: number
 * @index: index of the bit
 * Return: bit at index
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i = 0;
	unsigned long int base = 1;
	int array[64];

	if (*n == 0)
	{
		array[0] = 0;
	}
	else
	{
		while (base <= (*n >> 1))
		{
			base = base * 2;
		}
		while (base != 0)
		{
			if (*n >= base)
			{
				array[i] = 1;
				*n = *n - base;
			}
			else
				array[i] = 0;
			base = base >> 1;
			i++;
		}
		i--;
	}
	if (index > 63)
		return (-1);
	if (index > i)
	{
		array[63 - index] = 1;
		return (1);
	}
	array[i - index] = 1;
	return (1);	
}
