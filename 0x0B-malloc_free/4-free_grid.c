
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees memory of a 2D array of integers
 *
 * @grid: the 2D pointer array
 * @height: number of rows
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
