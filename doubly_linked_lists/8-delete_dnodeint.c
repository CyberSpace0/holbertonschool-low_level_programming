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
dlistint_t *tmp;
unsigned int i = 0;
if (head == NULL || *head == NULL)
{
return (-1);
}
if (index == 0)
{
tmp = node;
*head = node->next;
if (*head != NULL)
{
(*head)->prev = NULL;
}
free(tmp);
return (1);
}
while (node != NULL && i < index)
{
node = node->next;
i++;
}
if (node == NULL)
{
return (-1);
}
tmp = node;
if (node->prev)
{
node->prev->next = node->next;
}
if (node->next)
{
node->next->prev = node->prev;
}
free(tmp);
return (1);
}
