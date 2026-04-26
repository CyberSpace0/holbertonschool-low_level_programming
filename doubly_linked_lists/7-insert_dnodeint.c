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


if (idx == 0)
{
ls->prev = NULL;
ls->next = *h;
if (*h != NULL)
{
(*h)->prev = ls;
}
*h = ls;
return (ls);
}


while (node != NULL && i < idx)
{
if (i == idx)
{
ls->next = node;
ls->prev = node->prev;
if (node->prev != NULL)
{
node->prev->next = ls;
}
else
{
*h = ls;
}
node->prev = ls;
break;
}
else
{
node = node->next;
i++;
}
}

return (ls);

}
