#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2 dimensional array of ints previously
 * created by alloc_grid function
 * @grid: 2-D array of integers to free
 * @height: height of grid
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
int i = 0;

if (grid == NULL)
return;
while (i < height)
free((int *)grid[i++]);
free(grid);
}
