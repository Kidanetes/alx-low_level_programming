#!/usr/bin/python3
"""this module contains a functin which will
calculate the perimeter of an island"""


def island_perimeter(grid):
    """this function calculates the perimeter
    of the island
    Args:
    grid(list of list): contains the map of an
    island as a list
    """
    perimeter = 0;
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                plus = 4
                if i > 0:
                    if grid[i - 1][j] == 1:
                        plus -= 1
                    if i < len(grid) - 1:
                        if grid[i + 1][j] == 1:
                            plus -= 1
                    if j > 0:
                        if grid[i][j - 1] == 1:
                            plus -= 1
                    if j < len(grid[0]) - 1:
                        if grid[i][j + 1] == 1:
                            plus -= 1
                perimeter += plus
    return perimeter
