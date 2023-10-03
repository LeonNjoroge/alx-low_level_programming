#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid of integers.
 *
 * @grid: The 2D grid to be freed.
 * @height: The height of the grid.
 *
 * Return: None.
 */
void free_grid(int **grid, int height)
{
int i;

i = 0;

while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
