#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* _calloc - entry point
* @nmemb: length
* @size: length
* Return: always (0) success
*/
int *array_range(int min, int max)
{
int* arr;
int i;
int x = 0;
if (min > max)
{
return (NULL);
}
arr = malloc((max - min) * sizeof(int));
if (arr == NULL)
{
return (NULL);
}
for (i = min; i <= max; i++)
{
arr[x] = i;
x++; 
}
return (arr);


}
