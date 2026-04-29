#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
* hash_table_set - entry point
* @ht: string to generate the real key for dictionary
* @key: size of array
* @value: the value
* Return: always (0) success
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
long int index;
hash_node_t *node = malloc(sizeof(hash_node_t));
if (node == NULL)
{
return (0);
}

node->key = strdup(key);
node->value = strdup(value);

if (node->key == NULL || node->value == NULL)
{
return (0);
}

node->next = ht->array[index];

index = key_index(key, ht->size);
ht->array[index] = node;

return (1);
}
