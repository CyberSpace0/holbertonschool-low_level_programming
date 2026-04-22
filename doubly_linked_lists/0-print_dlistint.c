#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - check the code
 * @h:dd
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
int i = 0;
const dlistint_t *node = h;

while (node != NULL)
{
printf("%i\n", node->n);

node = node->next;
i++;
}

return (i);

}
