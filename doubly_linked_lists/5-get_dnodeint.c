#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - check the code
 * @head:dd
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *node;
node = head;
if (index == NULL)
{
return (NULL);
}
while (head != NULL)
{
if (i == index)
{
return (node);
}
node = head->next;
i++;
}

}
