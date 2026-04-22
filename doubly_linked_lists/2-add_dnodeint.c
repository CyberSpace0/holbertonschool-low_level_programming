#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - check the code
 * @h:dd
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
int i = 0;
const dlistint_t *node;
node->n = n;
node->next = *head;
node->prev = NULL;

*head = node;

return (node);
}
