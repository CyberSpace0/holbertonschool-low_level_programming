#include <stdio.h>
#include "main.h"
/**
* print_most_numbers - Entry functino
* Return: always (0) Success
*/
void print_most_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
if (i == 50 || i == 52)
{
(void)0;
}
else
{
_putchar(i);
}

}
_putchar('\n');
}
