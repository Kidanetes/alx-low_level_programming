#include "main.h"
/**
 * print_chessboard - print a 2D array
 * @a: input parameter
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int i = 0, j;

	while (a[i][7] != '\0')
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
		i++;
	}
}
