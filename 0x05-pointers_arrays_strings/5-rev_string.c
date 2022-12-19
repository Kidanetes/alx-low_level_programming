#include "main.h"
/**
 * rev_string - revrese a string
 * @s: input parameter
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int length;

	for (i = 0; i < length; i++)
	{
	}
	length = i;
	for (i = 0; i < length; i++)
	{
		*(s+i) = *(s + (length - 1 - i));
	}
}
