#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - pointer to a 2 dimensional array of integers
 * @width: input parameter1
 * @height: input parameter2
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid, i = 0, j = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (; j < height; j++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		for(; i < width; i++)
		{
			grid[j][i] = 0;
		}
	}
	return (grid);
}
	
