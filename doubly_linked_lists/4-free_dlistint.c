#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_dlistint - check the code
 * @head:dd
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{

dlistint_t *node;
while (head != NULL)
{
node = head->next;

free(node);

}

}
