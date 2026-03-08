#include <stdio.h>
#include "main.h"

/**
 * _strspn - Entry function
 * @s: int value from pointer
 * @accept: char
 * Return: always int value
 */
unsigned int _strspn(char *s, char *accept)
{
int i = 0;
int x = 0;
int result = 0;
char state[] = "false";
while (s[x] != '\0')
{
while (accept[i] != '\0')
{
if (accept[i] == s[x])
{
state = "true";
result++;
break;
}
else if(accept[i + 1] == '\0')
{
state = "false";
}
i++;
}
x++;
}
if (state != "true")
{
break;
}
}
