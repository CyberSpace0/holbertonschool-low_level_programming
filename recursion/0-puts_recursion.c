#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: destination string
 * @src: source string
 * Return: pointer to dest
 */
void _puts_recursion(char *s)
{
int i = 0;
_putcahr(*(s++));
_puts_recursion(s);

}
