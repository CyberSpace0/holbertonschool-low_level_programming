#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - check the code
 * @h:dd
 * Return: Always EXIT_SUCCESS.
 */
int sum_dlistint(dlistint_t *head)
{
unsigned int total = 0;
const dlistint_t *node = head;

if (head == NULL)
{
return (0);
}

while (node != NULL)
{
total = total + node->n;
node = node->next;
}

return (total);

}
