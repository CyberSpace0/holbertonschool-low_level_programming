#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* malloc_checked - entry point
* @b: length
* Return: always (0) success
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int x,i; 
if (s1 == NULL || s2 == NULL)
{
return ('\0');
}
ptr = malloc((_strlen(s1) + n), sizeof(char));
if (ptr == NULL)
{
return (NULL);
}

for (i = 0; i < _strlen(s1); i++)
{
ptr[i] = s1[i];
}
for (x = 0; x < n; x++)
{
ptr[i + x] = s2[x];
}

return (ptr);
}


/**
 * _strlen - returns the length of a string
 * @str: string to measure
 * Return: length of the string
 */
unsigned int _strlen(char *str)
{
unsigned int len = 0;
while (str[len] != '\0')
{
len++;
}
return (len);
}
