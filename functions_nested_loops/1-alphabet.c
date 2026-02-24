#include "main.h"

/**
* print_alphabet - entry point
* Return: always (0) success
*/
void print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
