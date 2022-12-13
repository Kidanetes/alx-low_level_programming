#include "main.h"
/**
 * _islower - checks wheter c is lowercase or not
 * c - is a parameter for _islower
 *
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		return (1);
	else
		return (0);

}
