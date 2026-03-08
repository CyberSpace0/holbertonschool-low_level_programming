#include <stdio.h>
#include "main.h"

/**
 * _memset - Entry function
 * @n: int value from pointer
 * @s: char
 * @b: char also
 * Return: always int value
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
s[i] = b;
i++;
}

return (s);
}
