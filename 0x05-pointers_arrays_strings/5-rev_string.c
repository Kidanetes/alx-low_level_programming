#include "main.h"
/**
 * rev_string - revrese a string
 * @s: input parameter
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int tmp;
	int length;

	for (i = 0; s[i] != '\0'; i++);
	length = i;

	for (i = 0, j = length - 1; i <= j ; i++, j--)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
