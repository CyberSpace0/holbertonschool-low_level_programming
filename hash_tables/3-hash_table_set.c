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
unsigned long int index;
hash_node_t *node = malloc(sizeof(hash_node_t));
if (node == NULL)
{
return (0);
}

node->key = strdup(key);
node->value = strdup(value);
node->next = NULL;


if (node->key == NULL || node->value == NULL)
{
return (0);
}
index = key_index((const unsigned char *)key, ht->size);
if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
{
ht->array[index]->value = strdup(value);
}
else
{
node->next = ht->array[index];
ht->array[index] = node;
}


return (1);
}
