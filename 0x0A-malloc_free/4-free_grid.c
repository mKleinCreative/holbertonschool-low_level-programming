#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees a 2d grid
 * @grid: grid to free
 * @height: height of the grid to free
 * Return: freed up space, if it crashes 0
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height != 0)
	{
		for (i = 0; i < height; i++)
		{
			free(grid[i]);
		}
	free(grid);
	}
}

