#include "main.h"
/**
 * wildcmp - compares twp strings
 * @s1: input parameter 1
 * @s2: input parameter 2
 * Return: int (0 or 1)
 */
int wildcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s2[j] == '*')
	{
		j++;
		return (wildcmp(s1, ++s2));
	}
	/*if (s2[j - 1] == '*' && s1[i] == s2[j])
	{
		i++;
		j++;
		return (wildcmp(++s1, ++s2));
	}*/
	if (s1[i] == s2[j])
	{
		++i;
		++j;
		return (wildcmp(++s1, ++s2));
	}
	if ((s2[j - 1] == '*' && s1[i] != s2[j]) &&
	    (s1[i + 1] != '\0' || s2[j + 1] != '\0'))
	{
		i++;
		return (wildcmp(++s1, s2));
	}
	return (0);
}


