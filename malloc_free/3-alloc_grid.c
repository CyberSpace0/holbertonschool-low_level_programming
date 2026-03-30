#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* str_concat - entry point
* @s1: length
* @s2: length
* Return: always (0) success
*/
int **alloc_grid(int width, int height)
{
if (width <= 0 || height <= 0)
{
return (NULL);
}
int **r;
int i,x = 0;
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
return (NULL);
}
for (x = 0; x < width; x++)
{
r[i][x] = 0;
}

}
return (r);

}
