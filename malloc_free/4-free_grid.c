#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* alloc_grid - entry point
* @width: length
* @height: length
* Return: always (0) success
*/
void free_grid(int **grid, int height)
{
int i;
for (i = height; i > 0; i--)
{
free(grid[i]);
}
}
