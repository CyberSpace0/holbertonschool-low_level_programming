#include "main.h"

/**
* jack_bauer - entry point
* Return: always (0) success
*/
void times_table(void)
{
int table,column,result;
for (table = 0; table < 10;table++)
{
for (column = 0; column < 10;column++)
{
result = table * column;
if (column == 0)
_putchar(result + '0');
else
{
_putchar(',');
_putchar(' ');
if (result < 10)
_putchar(' ');
if (result >= 10)
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}

}
_putchar('\n');
}

}
