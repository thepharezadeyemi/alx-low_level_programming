#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees 2 dimensional array
 * @grid: 2 dimentional array of integers
 * @height: height of grid
 * Return: return nothing
 */
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
		{
			free(grid[height]);
			free(grid);
		}
	}
}
