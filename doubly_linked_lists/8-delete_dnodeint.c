#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - check the code
 * @head:dd
 * @index: index
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *node = *head;
unsigned int i = 0;

if (head == NULL || *head == NULL)
{
return (-1);
}

if (index == 0)
{
node = node->next;
free(node->prev);
node->prev = NULL;
*head = node;
return (1);
}

while (node != NULL)
{
if (i == index - 1)
{
if (node->next->next != NULL)
{
node->next = node->next->next;
free(node->next->prev);
node->next->prev = node;
return (1);
break;
}
else
{
node->next = NULL;
}

}
node = node->next;
i++;
return (1);
}



return (-1);
}
