#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
* hash_table_delete - entry point
* @ht: string to generate the real key for dictionary
* Return: always (0) success
*/
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *nodeو *tmp;
unsigned long int i = 0;

for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
while (node != NULL)
{
tmp = node->next;
free(node->key);
free(node->value);
free(node);
node = tmp;
}
}

free(ht->array);
free(ht);
}
