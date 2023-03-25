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
        int **array;
        int i = 0, j = 0;

        array = malloc(sizeof(int *) * height);
        if (array == NULL)
                return (NULL);
        while (i < height)
        {
                array[i] = malloc(sizeof(int) * width);
                if (array[i] == NULL)
                {
                        while (i--)
                        {
                                free(array[i]);
                                free(array);
                                return (NULL);
                        }
                }
                i++;
        }
        i = 0;
        while (i < height)
        {
                while (j < width)
                {
                        array[i][j] = 0;
                        j++;
                }
                i++;
        }
        return (array);
}
