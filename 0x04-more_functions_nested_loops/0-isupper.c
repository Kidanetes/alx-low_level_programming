#include "main.h"

/**
 * _isupper - checks wheter a character is uppercase or not
 * @c: input parameter
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
