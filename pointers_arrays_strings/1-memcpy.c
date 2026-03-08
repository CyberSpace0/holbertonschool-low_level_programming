#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Entry function
 * @n: int value from pointer
 * @src: char
 * @dest: char also
 * Return: always int value
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}

return (dest);
}
