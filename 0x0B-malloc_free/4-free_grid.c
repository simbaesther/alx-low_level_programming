#include "main.h"

/**
 * free_grid - a function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @grid: the 2 dimensional array of integers to be freed
 * @height: the height of the 2 dimensional grid
 * both dimensions are previously created by your alloc_grid function.
 */
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
