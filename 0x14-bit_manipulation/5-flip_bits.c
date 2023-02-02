#include "main.h"
/**
 * flip_bit - count numbe of bits to be filped
 * @n: number
 * @m: number
 * Return: number of bits to fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int ones = 0, zeros = 0, i = 0;

	for (i = 0; i < 64; i++)
	{
		if (x & 1)
			ones++;
		else
			zeros++;
		x = x >> 1;
	}
	return (ones);
}
