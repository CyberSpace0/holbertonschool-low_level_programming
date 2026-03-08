#include <stdio.h>
#include "main.h"

/**
 * _strstr - Entry function
 * @haystack: int value from pointer
 * @needle: char
 * Return: always int value
 */
char *_strstr(char *haystack, char *needle)
{
int i, j;
if (!*needle)
{
return (haystack);
}
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (haystack[i + j] != needle[j])
break;
}
if (needle[j] == '\0')
return (haystack + i);
}
return (NULL);
}
