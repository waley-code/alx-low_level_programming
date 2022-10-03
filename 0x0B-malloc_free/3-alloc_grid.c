#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - Main function point of entry
* @width: The lenght in rows of 2D array
* @height: The heights in columns of the 2D array
* Return: Returns a pointer pointing to the 2D array of int / null
*/
int **alloc_grid(int width, int height)
{
	int **mtx;
	int i;
	int j;
	int l;
	int *p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	mtx = (int **)malloc(height * sizeof(int *));
	if (mtx == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		*(mtx + i) = (int *)malloc(width * sizeof(int));
		if (*(mtx + i) == NULL)
		{
			for (i = 0; i < height; i++)
			{
				p = mtx[i];
				free(p);
			}
			free(mtx);
			return (NULL);
		}
	}
	for (l = 0; l < height; l++)
	{
		for (j = 0; j < width; j++)
		{
			mtx[l][j] = 0;
		}
	}
	return (mtx);
}
