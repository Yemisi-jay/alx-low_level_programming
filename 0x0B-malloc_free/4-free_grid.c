#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimentional grid previously
 * created by alloc_grid function
 * @grid: the grid to free
 * @height: the height of the array
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
