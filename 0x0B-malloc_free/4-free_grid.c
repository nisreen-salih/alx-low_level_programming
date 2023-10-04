#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid
 *
 * @grid: grid
 * @height: height
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
