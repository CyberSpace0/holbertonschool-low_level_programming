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
node->next = *head;
node->prev = NULL;

if ((*head) != NULL)
{
last = head;
while (last != NULL)
{
if (last->next == NULL)
{
node->prev = last;
}
last = last->next;
}

}


*head = node;
return (node);
}
