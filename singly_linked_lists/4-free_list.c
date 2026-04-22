#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <unistd.h>


/**
 * free_list - check the code
 * @head: ddd
 * Return: Always 0.
 */
void free_list(list_t *head)
{
free(head->str);
free(head->len);
free(head->next);
free(head);

}

