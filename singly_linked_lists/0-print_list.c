#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <unistd.h>


/**
 * print_list - check the code
 * @h:struct
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
int i = 0;
const list_t *node = h;
while (node != NULL)
{
char *str = node->str;
int len = node->len;
if (str == NULL)
{
str = "(nil)";
len = 0;
}
_putchar('[');
print_Int(len);
_putchar(']');
_putchar(' ');
while (*str != '\0')
{
_putchar(*str);
str++;
}
node = node->next;
i++;
_putchar('\n');

}
return (i);

}


/**
 * print_int - prints an integer
 * @n: integer to print
 * Return: number of printed digits
 */
int print_Int(int n)
{
int count = 0;
char c;
if (n == -2147483648)
{
write(1, "-2147483648", 11);
return (11);
}
if (n < 0)
{
write(1, "-", 1);
n = -n;
count++;
}
if (n / 10)
count += print_Int(n / 10);
c = (n % 10) + '0';
write(1, &c, 1);
count++;
return (count);
}
