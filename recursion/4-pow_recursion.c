#include "main.h"

/**
 * factorial - concatenate two strings
 * @n: destination string
 * Return: pointer to dest
 */
int _pow_recursion(int x, int y)
{

if (y < 0)
{
return (-1);
}
if (y > 0)
{
return (x * _pow_recursion(x, y - 1));
}
return (1);
}
