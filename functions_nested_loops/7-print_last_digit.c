#include "main.h"

/**
* print_last_digit - entry point
* * @c: the character to check
* Return: always (0) success
*/
int print_last_digit(int c)
{
int last_digit = c % 10;
_putchar(last_digit);
return (last_digit);
}
