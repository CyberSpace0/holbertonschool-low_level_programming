#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main()
{

list_t *head = malloc(sizeof(list_t));
list_t *second;
list_t hello = {"khalid", 22, NULL};
second = &hello;
head->str = "Khalid";
head->len = 4;
head->next = second;
list_t *node = head;
while (node != NULL)
{
printf("%s -> %i\n", node->str, node->len);
node = node->next;
}

return (0);
}
