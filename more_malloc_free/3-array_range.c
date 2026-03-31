#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* array_range - entry point
* @min: length
* @max: length
* Return: always (0) success
*/
int *array_range(int min, int max)
{
int* arr;
int i;
int x = 0;
int total = max - min;
if (min > max)
{
return (NULL);
}
if (total == 0)
{
total = 1;
}
arr = malloc(total * sizeof(int));
if (arr == NULL)
{
return (NULL);
}
for (i = min; i < max; i++)
{
arr[x] = i;
x++; 
}
return (arr);


}
