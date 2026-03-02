#include <stdio.h>
#include "main.h"
/**
* print_numbers - Entry functino
* Return: always (0) Success
*/
void print_most_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
(i == 2 || i == 4) ? : _putchar(i);
}
_putchar('\n');
}
