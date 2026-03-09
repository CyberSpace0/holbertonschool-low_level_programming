#include "main.h"

/**
 * _strlen_recursion - concatenate two strings
 * @s: destination string
 * Return: pointer to dest
 */
int factorial(int n)
{
if (n <  0)
{
return (-1);
}
else
{
if (n != 0)
{
return (n * factorial(n - 1));
}
return (n * n + 1);
}
}
