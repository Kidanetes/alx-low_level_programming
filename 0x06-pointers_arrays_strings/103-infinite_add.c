#include "main.h"
/**
 * *infinite_add - add two numbers
 * @n1: parameter1
 * @n2: parameter2
 * @r: parameter3
 * @size_r: parameter4
 * Return: pointer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, length1, length2;
	int res;
	while (n1)
	{
		i++;
	}
	length1 = i;
	while (n2)
	{
		j++;
	}
	length2 = j;
	if (size_r < length1 || size_r < length2)
		r = '0';
	else
	{
		j = 0;
		while (n1 != '\0' || n2 != '\0')
		{
			if (j >= length1)
				r[j] = n2[j];
			else if (j >= length2)
				r[j] = n1[j];
			else
			{
				res = res + (int) (n1[j] - '0' + n2[j] - '0');
				r[j] = (res % 10) + '0';
				res = res / 10;
			}
			j++;
		}
	}
	return (r);
}



