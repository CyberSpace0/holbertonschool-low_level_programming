#include <stdio.h>
#include "main.h"

int exceptions(char k);

/**
 * cap_string - concatenate two strings
 * @s: destination string
 * Return: pointer to dest
 */
char *cap_string(char *s)
{
int i = 0;
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
while (s[i] != '\0')
{
if (s[i] >= 'a' && s[i] <= 'z')
{
if (exceptions(s[i - 1]))
{
s[i] = s[i] - 32;
}
}
i++;
}
return (s);
}

/**
 * exceptions - concatenate two strings
 * @k: destination string
 * Return: pointer to dest
 */
int exceptions(char k)
{
int i = 0;
char p[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};
while (i < 13)
{
if (k == p[i])
{
return (1);
}
i++;
}
return (0);
}
