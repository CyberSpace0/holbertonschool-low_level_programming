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
while ((s[i] != '\0'))
{
if (s[i] == c)
{
return (&s[i]);
}
i++;
};
if (s[i] == '\0')
{
return (&s[i]);
}

return (NULL);
}
