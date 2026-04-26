#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - check the code
 * @head:dd
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *node = *h;
dlistint_t *ls = malloc(sizeof(dlistint_t)); 
if (ls == NULL)
{
return (NULL);
}
ls->n = n;


if (*h == NULL)
{
return (NULL);
}

while (node != NULL)
{
if (i == idx)
{
ls->next = node->next;
ls->prev = node;
if (node->next != NULL)
{
node->next->prev = ls;
}
node->next = ls;

i++;
break;
}
else
{
node = node->next;
i++;
}
}

return (node);

}
