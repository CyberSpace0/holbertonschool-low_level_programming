#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <unistd.h>


/**
 * add_node_end - check the code
 * @str:struct
 * @head: ddd
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
int i = 0;
size_t len = 0;
list_t *node, *forword;
node = malloc(sizeof(list_t));
if (node == NULL)
{
return (NULL);
}
node->str = strdup(str);
if (node->str == NULL)
{
free(node);
return (NULL);
}
while (str[len])
{
len++;
}
_putchar('[');
print_Int(len);
_putchar(']');
node->len = len;
node->next = NULL;

_putchar(' ');
for (i = 0; i < len; i++)
{
_putchar(str[i]);
i++;
}

forword = *head;
while (forword != NULL)
{
forword = forword->next;
}
if (head == NULL)
{
forword->next = node;
}
*head = forword;

return (node);
}

/**
 * print_Int - prints an integer
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
