#include "main.h"
/**
 * rev_string - revrese a string
 * @s: input parameter
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	char a[(sizeof(s)/4)];
	int length = (sizeof(s)/4);
	
	for (i = 0; i < length; i++)
	{
		*(a+i) = *(s + (length - 1 - i));
	}
	s = a;
}
