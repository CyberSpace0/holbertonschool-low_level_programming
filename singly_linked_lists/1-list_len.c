#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <unistd.h>


/**
 * list_len - check the code
 * @h:struct
 * Return: Always 0.
 */
size_t list_len(const list_t *h)
{
int i = 0;
const list_t *node = h;
while (node != NULL)
{
node = node->next;
i++;
}
return (i);

}
