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
if (str != "\0")
{
while (*str++)
{
if (*str != '\0')
{
_putchar(*str);
}
}

}
_putchar('\n');
}
