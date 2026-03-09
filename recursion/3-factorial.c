#include "main.h"

/**
 * factorial - concatenate two strings
 * @n: destination string
 * Return: pointer to dest
 */
int factorial(int n)
{
if (n != 0)
{
return (n * factorial(n - 1));
}
return (n * n + 1);
}
