#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* free_grid - entry point
* @grid: length
* @height: length
* Return: always (0) success
*/
void free_grid(int **grid, int height)
{
while (height--)
{
free(grid[height]);
}
free(grid);
}
