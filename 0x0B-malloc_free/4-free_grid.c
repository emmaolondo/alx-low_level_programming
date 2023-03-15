#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2D grid 
 * previously created by alloc_grid function.
 * @grid: pointer array
 * @height: represent rows of the array(length)
 *
 *
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
int i = 0;
while (i < height)
{
free(grid[i]);
i++;
}
free(grid);
}
