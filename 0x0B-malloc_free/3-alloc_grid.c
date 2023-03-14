#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers
 *
 * @width: number of columns
 * @height: number of rows
 *
 * Return:	fail - NULL if malloc fails OR
 *			if width or height <= 0
 *		success - pointer to new 2D array
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int *row = NULL;
	int c, r = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);
	while (r < height)
	{
		row = malloc(width * sizeof(int));
		if (row == NULL)
		{
			/* FREE previous allocations */
			while (r)
			{
				free(grid + (r - 1));
				r--;
			}
			return (NULL);
		}
		c = 0;
		while (c < width)
		{
			*(row + c) = 0;
			c++;
		}
		*(grid + r) = row;
		r++;
	}
	return (grid);
}
