#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*(s++));
_puts_recursion(s);
}
else
{
_putchar('\n');
}
}
