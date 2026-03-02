#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14 ten times
 * Return: always (0) Success
 */
void more_numbers(void)
{
int i, x;
for (x = 0; x < 10; x++)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar('1');
}
_putchar((i % 10) + '0');
}
_putchar('\n');
}
}