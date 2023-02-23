#!/usr/bin/python3
""" Main module for the perimeter function"""


def island_perimeter(grid):
    """
    returns the perimeter of the island described in grid
    """
    if not grid:
        raise ValueError("grid cannot be empty")

    row_len = len(grid[0])
    for row in grid:
        if len(row) != row_len:
            raise ValueError("grid must be rectangular")
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2
    return perimeter
