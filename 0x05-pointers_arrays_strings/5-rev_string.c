#include "main.h"
/**
 * rev_string - revrese a string
 * @s: input parameter
 * Return: void
 */
void rev_string(char *s)
{
	int length, i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
	}
	const int length = i;
	char a[length];
	for (i = 0; i < length; i++)
	{
		a[i] = *(s + (length - 1 - i));
	}
	*s = &a;
}
