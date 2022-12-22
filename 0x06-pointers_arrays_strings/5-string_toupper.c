#include "main.h"
/**
 * string_toupper - changes the letterse of 
 * a string to uppercase letter
 * @s: input parameter
 * Return: String
 */
char *string_toupper(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] + ('A' - 'a');
		}
		i++
	}
	return (s);
}
