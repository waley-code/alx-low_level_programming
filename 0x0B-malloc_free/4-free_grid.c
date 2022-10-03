#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* free_grid - Main function point of entry
* @grid: Number of rows of the 2D array
* @height: The columns of occupied bt the string
* Return: Returns a pointer pointing to a 2D array of int datatype / null
*/
void free_grid(int **grid, int height)
{
	int a = 0;

	int *ptr;

	while (a < height)
	{
		ptr = grid[a];
		free(ptr);
		a++;
	}
	free(grid);
}
