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
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *node = malloc(sizeof(dlistint_t));
dlistint_t *last;

if (node == NULL)
{
return (NULL);
}

node->n = n;
node->next = NULL;

if (*head == NULL)
{
node->prev = NULL;
*head = node;
return (node);
}

last = *head;
while (last->next != NULL)
{
last = last->next;
}
last->next = node;
node->prev = last;

return (node);
}
