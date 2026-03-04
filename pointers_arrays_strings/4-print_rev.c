#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Entry function
 * @str: char value from pointer
 * Return: always int value
 */
void print_rev(char *str)
{
int len = 0;
int i;
while (str[len] != '\0')
len++;
for (i = len - 1; i >= 0; i--)
{
_putchar(str[i]);
}
_putchar('\n');
}
