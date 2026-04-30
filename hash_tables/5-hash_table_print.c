#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
* hash_table_get - entry point
* @ht: string to generate the real key for dictionary
* @key: size of array
* Return: always (0) success
*/
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
long unsigned int i = 0;
int first = 1;
if (ht != NULL)
{
printf("{");
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
if (node != NULL)
{
if (!first)
{
printf(", ");
}
printf("'%s': '%s'", node->key, node->value);
while (node->next != NULL)
{
node = node->next;
printf(", '%s': '%s'", node->key, node->value);

}
first = 0;
}
}
printf("}\n");
}
}
