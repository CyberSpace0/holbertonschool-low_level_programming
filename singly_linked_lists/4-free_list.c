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
while(head != NULL)
{
free(head->next);
}
free(head);
}

