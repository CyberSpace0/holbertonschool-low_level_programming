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
list_t node;
while (head != NULL)
{
node = head->next;

free(head->str);
free(head);
    
}
    

}

