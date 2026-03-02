#include "main.h"
/**
 * print_line - prints numbers from 0 to 14 ten times
 * Return: always (0) Success
 */
void print_line(int n)
{
int i;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0;i < n;i++)
{
_putchar('_');
}
}