#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _atoi - Entry function
 * @dest: char value from pointer
 * @src: char value
 * Return: always int value
 */

int _atoi(char *s)
{
int i = 0;
int result = 0;

while (s[i] >= '0' && s[i] <= '9')
{
    result = result * 10 + (s[i] - '0');
    i++;
}

return result;
}
