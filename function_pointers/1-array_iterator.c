#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - entry point
* @array: hee
* @size: function pointer
* @action: ddd
* Return: always (0) success
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
int i;
void (*ptr)(char *);
ptr = action;
for (i = 0; i < size; i++)
{
ptr(array[i]);
}
}
