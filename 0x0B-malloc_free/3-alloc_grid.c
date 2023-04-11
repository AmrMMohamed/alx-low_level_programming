#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: pointer to the newly created 2D array, NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
	{
		/* free previously allocated memory */
		for (j = i - 1; j >= 0; j--)
			free(grid[j]);
		free(grid);
		return (NULL);
	}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
