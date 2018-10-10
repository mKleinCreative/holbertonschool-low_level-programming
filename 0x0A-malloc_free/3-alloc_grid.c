#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a poniter to 2d array of ints
 * @width: width of array.
 * @height: height of array.
 * Return: the printed array or null on failure.
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	grid = malloc(height * sizeof(*grid));

	for (i = 0; i < height; i++)
	{
		grid[i] = (int *)malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			for (; i >= 0; i--)
				free(grid[i]);
			free(grid);
		}
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}

