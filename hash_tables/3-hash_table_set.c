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
hash_node_t *node = malloc(sizeof(hash_node_t *));
if (node == NULL)
{
return (0);
}
node->key = strdup(key);
node->value = strdup(value);
node->next = NULL;

index = hash_djb2(key) % 10;
ht->size = 10;
ht->array[index] = node;


return (1);
}
