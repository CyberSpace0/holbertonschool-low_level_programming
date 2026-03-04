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
int i, x;
while (str[len] != '\0')
{
len++;
}
for (i = len / 2; i < len; i = i + 1)
{
ki[i] = str[i];
}

for (x = 0; x < len; x = x + 2)
{
_putchar(ki[x]);
}
_putchar('\n');

}
