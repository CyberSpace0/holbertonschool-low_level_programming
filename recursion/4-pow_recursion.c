#include "main.h"

/**
 * _pow_recursion - concatenate two strings
 * @x: destination string
 * @y: int value
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
