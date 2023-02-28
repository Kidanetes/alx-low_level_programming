#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: input parameter
 * @src: input parameter
 * @n: input parameter
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
char *tmp = dest;
        while (n--)
        {
                *dest = *src;
                dest++;
                src++;
        }
        dest = tmp;
        return (dest);
}
