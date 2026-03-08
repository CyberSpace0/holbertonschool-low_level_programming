#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry function
 * @s: int value from pointer
 * @accept: char
 * Return: always int value
 */
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
int x = 0;
while (accept[x] != '\0')
{
if (accept[x] == *s)
{
return (s);
break;
}
x++;
}

s++;
};


return (NULL);
}
