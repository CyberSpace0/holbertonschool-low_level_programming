#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* alloc_grid - entry point
* @width: length
* @height: length
* Return: always (0) success
*/
int **alloc_grid(int width, int height)
{
int** r;
int i,x = 0;
if (width <= 0 || height <= 0)
{
return (NULL);
}
r = malloc(sizeof(int *) * height);
if (r == NULL)
{
return (NULL);
}
for (i = 0; i < height; i++)
{
r[i] = malloc(sizeof(int) * width);
if (r[i] == NULL)
{
while (i--)
{
free(r[i]);
}
free(r);
return (NULL);
}
for (x = 0; x < width; x++)
{
r[i][x] = 0;
}

}
return (r);

}
