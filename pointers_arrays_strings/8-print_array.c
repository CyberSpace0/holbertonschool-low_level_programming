#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_array - Entry function
 * @a: char value from pointer
 * @n: int value
 * Return: always int value
 */

void print_array(int *a, int n)
{
if (n > 0)
{
int i;
printf("%i", a[0]);
for (i = 1; i < n; i++)
{
printf(", %i", a[i]);
}
}
printf("%c", '\n');
}
