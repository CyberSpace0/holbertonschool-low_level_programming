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
size_t i = 0;
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
}
_putchar('\n');
forword = *head;
if (*head == NULL)
{
*head = node;
}

while (forword->next != NULL)
{
forword = forword->next;
}
forword->next = node;

return (node);
}

