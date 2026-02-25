#include "main.h"

/**
* print_sign - entry point
* * @c: the character to check
* Return: always (0) success
*/
int print_sign(int c)
{
if (c > 0)
{
_putchar('+');
return  (1);
}
else if (c == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}


}
