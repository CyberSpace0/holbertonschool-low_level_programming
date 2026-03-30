#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - entry point
* @s1: length
* @s2: lneee
* Return: always (0) success
*/
char *str_concat(char *s1, char *s2)
{
char *arr;
int i;
int l1,l2,s;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
for (l1 = 0; s1[l1] != '\0';l1++)
{

}
for (l2 = 0; s2[l2] != '\0';l2++)
{

}


arr = malloc((l1 + l2 + 1) * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < l1; i++)
{
arr[i] = s1[i];
}
for (s = 0; s < l2; s++)
{
arr[i + s] = s2[s];
}
arr[l1 + l2] = '\0';    
return (arr);

}