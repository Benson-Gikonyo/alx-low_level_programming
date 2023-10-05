#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2 dimensional grid previously
* created by your alloc_grid function.
* @grid: array made by alloc_grid function
* @height: 2nd dimension of array
* Return: void
*/

void free_grid(int **grid, int height)
{
	int x;

	if (!grid || height < 1)
		return;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
