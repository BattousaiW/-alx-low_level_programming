#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 *               integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to a grid array of integers.
 */
int **alloc_grid(int width, int height)
{
int **grid;
int h_index, w_index;
if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

for (h_index = 0; h_index < height; h_index++)
{
grid[h_index] = malloc(sizeof(int) * width);
if (grid[h_index] == NULL)
{
for (; h_index >= 0; h_index--)
free(grid[h_index]);
free(grid);
return (NULL);
}
}
for (h_index = 0; h_index < height; h_index++)
{
for (w_index = 0; w_index < width; w_index++)
grid[h_index][w_index] = 0;
}
return (grid);
}
