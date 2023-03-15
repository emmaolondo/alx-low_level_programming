#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 *alloc_grid - function that returns a pointer to a 2D array of integers.
 *@width:column representation
 *@height: row representation
 *
 *
 *Return: 2d array
 */
int **alloc_grid(int width, int height)
{
int **array_grid;
int row;
int col;
if (width <= 0 ||  height  <= 0)
{
return (NULL);
}
array_grid = malloc(sizeof(int *) * height * width);
if (array_grid == NULL)
{
return (NULL);
}
for (row = 0; row < height; row++)
{
array_grid[row] = malloc(sizeof(int) * height);
for (col = 0; col < width; col++)
{
array_grid[row][col] = 0;
}
}
return (array_grid);
}
