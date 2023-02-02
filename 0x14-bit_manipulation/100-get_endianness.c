#include "main"

/**
 * get_endianness - check wheter it is big endian or
 * little endian
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	char *c = (char *) & 1;
	if (*c)
		return (1);
	return (0);
}
