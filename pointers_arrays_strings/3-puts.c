#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _puts - Entry function
 * @str: char value from pointer
 * Return: always int value
 */
void _puts(char *str)
{
_putchar(*str);
while (*str++)
{
_putchar(*str);
}
_putchar('\n');
}
