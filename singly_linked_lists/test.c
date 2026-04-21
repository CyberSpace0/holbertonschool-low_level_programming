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
int i;
list_t *head = malloc(sizeof(list_t));
for (i = 0; i < 5; i++)
{
list_t *dd;
dd->str = "welcome";
dd->len = 331;
dd->next = head;
}
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
