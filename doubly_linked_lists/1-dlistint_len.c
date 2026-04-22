#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - check the code
 * @h:dd
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
int i = 0;
const dlistint_t *node = h;

while (node != NULL)
{
node = node->next;
i++;
}

return (i);

}
