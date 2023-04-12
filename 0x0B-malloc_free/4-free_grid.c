#include "main.h"
#include <stdlib.h>

/**
 * free_grid - a function that frees a 2
 * dimensional grid previously created by
 * alloc_grid function
 * @grid: multidimensional grid
 * @height: height input
 *
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
	free(grid[i]);
	}
	free(grid);
}
