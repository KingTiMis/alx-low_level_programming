#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees up a 2D grid.
 * @grid: Double pointer to the 2D grid.
 * @height: Height of the grid.
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
