#include "main.h"
/**
 * _isalpha - checkes wheter c is letter or not
 * @c: is a character
 *
 * Return: 1 if c is a character, 0 otherwise
 */
int _isalpha(int c)
{
	if((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}
