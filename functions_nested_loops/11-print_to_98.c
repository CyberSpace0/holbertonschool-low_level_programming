#include "main.h"
#include <stdio.h>
/**
* first - second functin to print
* @i: int value
* @n: int value
*/
void first(int i, int n);

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 */
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
