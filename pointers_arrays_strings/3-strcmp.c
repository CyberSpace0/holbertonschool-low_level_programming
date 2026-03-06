#include <stdio.h>
#include "main.h"

/**
 * _strcmp - concatenate two strings
 * @s1: destination string
 * @s2: source string
 * Return: pointer to dest
 */
int _strcmp(char *s1, char *s2)
{
int first, second = 0;
int i = 0;
while (s1[first] != '\0')
{
first++;
}
while (s2[second] != '\0')
{
second++;
}
if (s1 > s2)
{
return (15);
}
else if(s2 > s1)
{
return (-15);
}
else
{
return (0);
}
}

