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
    int i;
    int status = 0;
    for (i = 0; i < n ; i++)
    {
        if(src[i] == '\0')
        {
            status = 1;
            break;
        }
        dest[i] = src[i];
}
    while (*dest != '/0')
    {
        *dest = '/0'
        *dest++;
    }


    return (dest);
}
