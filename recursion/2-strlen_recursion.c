#include "main.h"

/**
 * _strlen_recursion - concatenate two strings
 * @s: destination string
 * Return: pointer to dest
 */
int _strlen_recursion(char *s)
{

if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));

}
