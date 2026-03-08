#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * @n: int value
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_len = 0;
int i = 0;
while (dest[dest_len] != '\0')
{
dest_len++;
}
while (src[i] != '\0' && i < n)
{
dest[dest_len + i] = src[i];
i++;
}
dest[dest_len + i] = '\0';
return (dest);
}
