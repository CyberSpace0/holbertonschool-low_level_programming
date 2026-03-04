#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Entry function
 * @str: char value from pointer
 * Return: always int value
 */
void rev_string(char *s)
{
int len = 0;
int i;
while (s[len] != '\0')
len++;
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
