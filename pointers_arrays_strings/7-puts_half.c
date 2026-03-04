#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - Entry function
 * @str: char value from pointer
 * Return: always int value
 */

void puts_half(char *str)
{
int len = 0;
char ki[1000];
int i, x, r;
while (str[len] != '\0')
{
len++;
}
switch (len % 2)
{
case 1:
    r = (len - 3) / 2;
    break;

default:
    r = len / 2;
    break;
}
for (i = r; i < len; i = i + 1)
{
ki[i] = str[i];
}

for (x = r; x < len; x = x + 1)
{
_putchar(ki[x]);
}
_putchar('\n');

}
