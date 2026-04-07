#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - check the code
 * @separator: int value
 * @n: int value
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
if (separator == NULL)
{
separator = "";
}
for (i = 0; i < n; i++)
{
if (i == (n - 1))
{
printf("%i",va_arg(args, int));
}
else
{
printf("%i%s",va_arg(args, int), separator);
}
}
va_end(args);
printf("\n");
}
