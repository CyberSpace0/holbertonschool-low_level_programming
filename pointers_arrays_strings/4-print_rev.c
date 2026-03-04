#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - Entry function
 * @str: char value from pointer
 * Return: always int value
 */
void print_rev(char *str)
{
int len = 0;
int i = 1;
while (*str++)
{
len++;
}
while (len > 0)
{
_putchar(*(str - i));
len = len - 1;
i++;
}

}
