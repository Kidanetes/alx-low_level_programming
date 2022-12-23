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
	int res = 0;
	char tmp;

	while (n1[i] != '\0')
	{
		i++;
	}
	length1 = i;
	while (n2[j] != '\0')
	{
		j++;
	}
	length2 = j;
	if (size_r < length1 && size_r < length2)
	{
		return (0);
	}
	else
	{
		j = 0;
		while (n1[j] != '\0' || n2[j] != '\0')
		{
			if (n1[j] == '\0')
			{
				n1[j] = '0';
			}
			if (n2[j] == '\0')
			{
				n2[j] = '0';
			}
			res = res + n1[j] - '0' + n2[j] - '0';
			r[j] = (res % 10) + '0';
			res = res / 10;
			j++;
		}
		if (size_r - 1 < j)
			return (0);
		if (res != 0 && j < size_r)
		{
			r[j] = res + '0';
			for(i = 0; i <= j; i++, j--)
			{
				tmp = r[i];
				r[i] = r[j];
				r[j] = tmp;
			}		
				
		}
	}
	return (r);
}
