#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - check the code.
 *
 * @grid: check the parameters.
 *
 * @height: check the parameters.
 */

void free_grid(int **grid, int height)
{
	for (int i = 0; i < height; i++)
		free(grid[i]);
}
