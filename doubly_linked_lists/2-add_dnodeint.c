#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - check the code
 * @head:dd
 * @n: int value
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *node = malloc(sizeof(dlistint_t));
if (node == NULL)
{
return (NULL);
}

node->n = n;
node->next = *head;
node->prev = NULL;

if ((*head) != NULL)
{
(*head)->prev = node;
}
*head = node;

return (node);
}
