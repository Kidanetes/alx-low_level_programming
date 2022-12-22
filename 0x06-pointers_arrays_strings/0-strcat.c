#include "main.h"
/**
 * _strcat - concatenates two strings into one
 * @dest: input parameter
 * @src: input parameter
 * Return: pointer to dest
 */
char* _strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';

	return (dest);
}
