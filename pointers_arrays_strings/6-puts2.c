#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Entry function
 * @str: char value from pointer
 * Return: always int value
 */

void puts2(char *str)
{
int len = 0;
char ki[1000];
int i,x;
while (str[len] != '\0')
{
len++;
}
for (i = 0; i < len; i = i + 2)
{
ki[i] = str[i];
}

for (x = 0; x < len; x = x + 2)
{
_putchar(ki[x]);
}
_putchar('\n');

}
