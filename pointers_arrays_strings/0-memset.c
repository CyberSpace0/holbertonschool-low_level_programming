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
int i = 0;
while (s[i] != '\0' && i < n)
{
s[i] = b;
i++;
}

}
