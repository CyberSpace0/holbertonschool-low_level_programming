#include "main.h"

/**
 * print_square - draws a diagonal line
 * @size: number of times to print '\'
 */
void print_square(int size)
{
int i, j;
int n = size;
for (j = 1; j <= n; j++)
{

for (i = 1; i <= n; i++)
{
_putchar('#');
}
_putchar('\n');
}
if (size <= 0)
{
_putchar('\n');
}
}
