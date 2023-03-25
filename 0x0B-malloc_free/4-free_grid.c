#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 * by your alloc_grid function
 * @grid: input parameter 1
 * @height: input parameter 2
 * Return: void
 */
void free_grid(int **grid, int height)
{
        int i = 0;

        if (grid == NULL)
        {
        }
        else
        {
                while (i < height)
                {
                        free(grid[i]);
                        i++;
                }
        }
        free(grid);
}
