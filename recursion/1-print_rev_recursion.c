#include "main.h"

/**
 * _print_rev_recursion - concatenate two strings
 * @s: destination string
 * Return: pointer to dest
 */
void _print_rev_recursion(char *s)
{

if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
_putchar(*s);

}
