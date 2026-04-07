#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

void end(char *ss);

/**
 * print_strings - check the code
 * @separator: int value
 * @n: int value
 * Return: Always 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *ss;
va_start(args, n);
if (separator == NULL)
{
separator = "";
}
for (i = 0; i < n; i++)
{
ss = va_arg(args, char*);
if (i == (n - 1))
{
end(ss);
}
else
{

if (ss == NULL)
{
ss = "(nil)";
printf("%s%s", ss, separator);
}
else
{
printf("%s%s", ss, separator);
}

}
}
va_end(args);
printf("\n");
}


/**
 * end - check the code
 * @ss: int value
 * Return: Always 0.
 */

void end(char *ss)
{

if (ss == NULL)
{
ss = "(nil)";
printf("%s", ss);
}
else
{
printf("%s", ss);
}

}
