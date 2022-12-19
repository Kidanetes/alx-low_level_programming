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

	for (i = 0; i < length; i++)
	{
		tmp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = tmp;
	}

}
