#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <unistd.h>


/**
 * add_node - check the code
 * @str:struct
 * @head: ddd
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
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

node->len = 0;
node->next = *head;

return (node);
}
