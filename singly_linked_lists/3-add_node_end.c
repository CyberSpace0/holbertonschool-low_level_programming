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

node->len = len;
node->next = NULL;

forword = *head;
while (forword != NULL)
{
forword = forword->next;
}
if (head == NULL)
{
head->next = node;
}
*head = forword;

return (node);
}

