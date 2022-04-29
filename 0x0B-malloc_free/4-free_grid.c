#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid.
 *
 * @grid: Matrix.
 * @height: height.
 *
 * Return: Returns the created array.
**/

void free_grid(int **grid, int height)
{

int i;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);

return;

}
