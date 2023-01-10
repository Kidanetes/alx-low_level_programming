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
	int **grid, i = , j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(sizeof(int) * width);
		if (grid[i] == NULL)
			return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		for(j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
	
