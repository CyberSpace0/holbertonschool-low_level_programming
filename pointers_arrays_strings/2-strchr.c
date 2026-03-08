#include <stdio.h>
#include "main.h"

/**
 * _strchr - Entry function
 * @s: int value from pointer
 * @c: char
 * Return: always int value
 */
char *_strchr(char *s, char c)
{
int i = 0;
int x = 0;
do
{
if (s[i] == c)
{
for (x = 0; x < i; x++)
{
s++;
}
return (s);
}
i++;
}while ((s[i] != '\0'));

return (NULL);
}
