#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
* create_array - entry point
* @c: length
* @size: char
* Return: always (0) success
*/
char *_strdup(char *str)
{
char *arr;
unsigned int i;

if (str == NULL)
{
return (NULL);
}
arr = malloc(strlen(str) * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < strlen(str); i++)
{
arr[i] = str[i];
}
return (arr);

}
