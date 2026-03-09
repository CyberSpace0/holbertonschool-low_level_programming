#include "main.h"

int ssqrt(int i, int x);

/**
 * is_prime_number - concatenate two strings
 * @n: destination string
 * Return: pointer to dest
 */
int is_prime_number(int n)
{
int i = 2;
return (ssqrt(n, i));

}

/**
 * ssqrt - secondary entrpoint
 * @n: int value
 * @x: int value
 * Return: always int
 */
int ssqrt(int n, int x)
{
if (n > 1)
{
if (n == x)
{
return (1);
}
if (n % x == 0)
{
return (0);
}
else
{
return (ssqrt(n, x + 1) );
}
}
else
{
return (0);
}
}
