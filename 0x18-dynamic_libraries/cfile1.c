#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
 * _islower - checks wheter c is lowercase or not
 * @c: is a parameter for _islower
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
/**
 * _isalpha - checkes wheter c is letter or not
 * @c: is a character
 *
 * Return: 1 if c is a character, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}
/**
 * _abs - computes the absoulute value of n
 * @n: is an input parameter
 *
 * Return: postive integer
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-n);
}
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
