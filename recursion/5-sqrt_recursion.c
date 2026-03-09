#include "main.h"

int ssqrt(int i, int x);

/**
 * _sqrt_recursion - concatenate two strings
 * @n: destination string
 * Return: pointer to dest
 */
int _sqrt_recursion(int n)
{
int i = 1;
if (n > 0)
{
return (ssqrt(n, i));
}
else
{
return (-1);
}

}

/**
 * ssqrt - secondary entrpoint
 * @n: int value
 * @x: int value
 */
int ssqrt(int n, int x)
{
int r = x * x;
if (x >= 1)
{

if (r == n)
{
return (x);
}
else
{
return (ssqrt(n, x + 1));
}

}
else
{
return (-1);
}

}
