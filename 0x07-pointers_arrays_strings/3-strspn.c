#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: input parameter
 * @accept: input parameter
 * Return: length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0, k = 0, i = 0, status;

	while (s[j] != '\0')
	{

               status = 0;		
               while (accept[k] != '\0')
		{
			if (s[k] == accept[j])
			{
				i++;
                                status = 1;
                                j++;
                                break;
			}
			k++;
		}
                if (status == 0)
                        break;
		j++;
	}
	return (k);
}
