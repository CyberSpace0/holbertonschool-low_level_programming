#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - entry point
* @array: hee
* @size: function pointer
* @cmp: ddd
* Return: always (0) success
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i,x;
int (*ptr)(int);
ptr = cmp;
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
x = ptr(array[i]);
if (x > 0)
{
return (i);
}
}
return (-1);
}
