#include "main.h"
/**
 * _strcpy - copies one string into another
 * @src: input parameter
 * @dest: input parameter
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; ; i++)
	{
		dest[i] = src[i];
		if (src[i] ==  '\0')
		{
			dest[i] = src[i];
			break;
		}
	}
	return (dest);
}
