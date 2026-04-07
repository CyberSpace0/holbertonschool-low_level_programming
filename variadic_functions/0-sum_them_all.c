#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - check the code
 * @n: int value
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int     i, total = 0;
va_list args;
va_start(args, n);

for (i = 0; i < n; i++)
{
total = total + va_arg(args, int);
}
va_end(args);
return (total);

}
