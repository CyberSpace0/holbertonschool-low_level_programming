#include "main.h"

/**
* print_alphabet - entry point
* Return: always (0) success
*/
void print_alphabet_x10(void)
{
for (int i = 0;i < 10;i++)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
