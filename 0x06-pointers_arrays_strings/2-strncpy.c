#include "main.h"
/**
 * _strncpy - copies one string into another
 * @dest: input parameter
 * @src: input parameter
 * @n: input parameter
 * Return: the copied string
 */
 char *_strncpy(char *dest, char *src, int n)
 {
	 int i,j,length;

	 for (i = 0; *src != '\0'; *src++,i++)
	 {
	 }
	 length = i;

	if (n < length)
	{
		for (j = 0; j < n; j++)
		{
			dest[j] = src[j];
		}
	}
	else
	{
		while (*src != '\0')
		{
			*dest = *src;
			*dest++;
			*src++;
		}
		while (*dest != '\0')
		{
			*dest = '\0';
			*dest++;
		}
	}
	
	return (dest);
 }
   
