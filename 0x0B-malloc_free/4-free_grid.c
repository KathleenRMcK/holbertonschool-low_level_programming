/**
 * free_grid - free allocated 2D array
 * @grid: grid being freed
 * @height: height of array
 */
#include "holberton.h"
void free_grid(int **grid, int height)
{
	int l;

	for (l = 0; l < height; l++)
		free(grid[l]);
	free(grid);
}
