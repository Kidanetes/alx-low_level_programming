#include "main.h"
/**
 * binary_to_uint - convet binary to unsigned int
 * @b: binary string
 *
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int sum = 0, base = 1;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum = sum * 2 + (b[i] - '0');	
		i++;
	}
	return (sum);
}
