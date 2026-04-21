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
list_t *add_node_end(list_t **head, const char *str);
{
size_t len = 0;
list_t *node;
node = malloc(sizeof(list_t));
if (node == NULL)
return (NULL);
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

*head->next = node;
return (node);
}

