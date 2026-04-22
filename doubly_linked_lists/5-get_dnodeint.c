#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - check the code
 * @head:dd
 * @index: int 
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *node;
node = head;
while (node != NULL)
{
if (i == index)
{
return (node);
}
node = node->next;
i++;
}
return (NULL);
}
