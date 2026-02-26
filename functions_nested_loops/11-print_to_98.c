#include "main.h"
#include <stdio.h>
/**
* print_to_98 - entry point
* @n: int value
* first - second functin to print
* @n: int value
* @i: int value
* Return: always (0) success
*/
void first(int i, int n);

void print_to_98(int n)
{
int i;

if (n <= 98)
{
for (i = n; i <= 98; i++)
{
first(i, n);
}
}
else
{
for (i = n; i >= 98; i--)
{
first(i, n);
}
}

printf("\n");

}

void first(int i, int n)
{
if (i == n)
{
printf("%i", i);
if (i != 98)
{
printf(",");
}
}

else if (i == 98)
{
printf(" %i", i);
}

else
{
printf(" %i,", i);
}
}
