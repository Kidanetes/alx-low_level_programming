#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints a buffer, 10
 * bytes per line
 * @b: buffer pointed by b
 * @size: size parameter
 *
 * Return: nothing
 */
void print_buffer(char *b, int size)
{
	int i = 0, j = 0;
	char tmp;

	if (size <= 0)
		printf("\n");
	else
	{
		for (; i < size; i = i + 10)
		{
			printf("%08x: ", i);
			for (j = 0; j < 10; j++)
			{
				tmp = *(b + i + j);
				if ((i + j) >= size)
					printf("  ");
				else
					printf("%02x", tmp);
				if (j % 2 != 0)
					printf(" ");
			}
			for (j = 0; j < 10 ; j++)
			{
				tmp = *(b + i + j);
				if (i + j >= size)
					break;
				else if (tmp >= 32 && tmp <= 126)
					printf("%c", tmp);
				else
					printf(".");
			}
			printf("\n");
		}
	}
}
