#include "main.h"
/**
 * _strcp - copies one string into another
 * @src: input parameter
 * @dest: input parameter
 * Return: pointer to destination
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	
	for (i = 0; ;i++)
	{
		*(dest + i) = *(src + i);
		if (i = '\0')
		{
			*(dest + i) = (src + i);
			break;
		}
	}
	return (dest);
}
