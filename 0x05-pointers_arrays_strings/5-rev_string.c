#include "main.h"
/**
 * rev_string - revrese a string
 * @s: input parameter
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	char a[_strlen(s)];
	
	for (i = 0; i < _strlen(s); i++)
	{
		a[i] = *(s + (length - 1 - i));
	}
	s = a;
}
