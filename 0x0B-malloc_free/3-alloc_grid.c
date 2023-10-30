#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to 2 dimentional array
 * @width: width of array
 * @height: height of array
 * Return: pointer to array of integers
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, r;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			free(grid[i]);
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (r = 0; r < width; r++)
			grid[i][r] = 0;

	return (grid);
}
