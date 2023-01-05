#include "main.h"
/**
 * is_palindrome - checks wheter a string 
 * is palandiorm or not
 * @s: input parameter
 * Return: int( 1 or 0)
 */
int is_palindrome(char *s)
{
	int x, y;
	if (*s == '\0')
		return (1);
	x = 0;
	y = _strlen_recursion(s);
	if (y == 1)
	{
		return (1);
	}
	else
		return palindrom(s, x, y - 1); 

	
}
/**
 * palindrom - checks wheter a string is palindrom or not
 * @s: input parameter
 * @index: input parameter
 * @size: input parameter
 * Return: int
 */
int palindrom(char *s, int index, int size)
{
	if (index >= size)
	{
		return (1);
	}
	if (s[index] == s[size])
	{
		return (palindrom(s, ++index, --size));
	}
	return (0);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: input parameter
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		s++;
		return (1 + _strlen_recursion(s));
	}
	return (0);
}
