#include "main.h"
/**
 * flip bit - set bit at index to 1
 * @n: number
 * @m: number
 * Return: number of bits to fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int ones = 0, zeros = 0, i = 0;

	for(i=0; i < 64; i++)
	{
		if(x & 1)
			ones++;
		else
			zeros++;
		x >>= 1;
	}
	return (ones);
}
