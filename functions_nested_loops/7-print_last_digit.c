#include "main.h"

/**
* print_last_digit - entry point
* * @c: the character to check
* Return: always (0) success
*/
int print_last_digit(int c)
{
int last_digit = c % 10;
if (last_digit < 0)
{
last_digit = -last_digit;
}
_putchar('0'+last_digit);
return (last_digit);
}
