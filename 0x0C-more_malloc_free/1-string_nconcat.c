#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: input parameter1
 * @s2: input parameter2
 * @n: input parameter3
 * Return: pointer to the new string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j] && j < n)
		j++;
	s3 = malloc((i + j + 1) * sizeof(char));
	if (s3 == NULL)
		return (NULL);
	while (k < (i + j))
	{
		if (k < i)
			s3[k] = s1[k];
		else
			s3[k] = s2[k - i];
		k++;
	}
	s3[k] = '\0';
	return (s3);
}
