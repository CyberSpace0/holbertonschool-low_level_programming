#include "main.h"

int sqrt(int i,int x);

/**
 * _sqrt_recursion - concatenate two strings
 * @n: destination string
 * Return: pointer to dest
 */
int _sqrt_recursion(int n)
{



}

int sqrt(int n,int x)
{
int r = x * x;
if (x != 1)
{

if (r == n)
{
return (r);
}
else
{
sqrt(n, x - 1);
}

}
else
{
return (-1);
}

}
