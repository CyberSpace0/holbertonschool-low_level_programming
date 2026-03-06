#include <stdio.h>
#include "main.h"

/**
 * _strncpy - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: int value
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}

