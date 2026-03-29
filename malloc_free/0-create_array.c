#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
* create_array - entry point
* @c: length
* @size: char
* Return: always (0) success
*/
char *create_array(unsigned int size, char c)
{
char *arr;
unsigned int i;

if (size == 0)
{
return (NULL);
}
arr = malloc(size * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < size; i++)
{
arr[i] = c;
}
return (arr);

}
