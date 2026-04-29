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
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *tmp;
if (ht == NULL || key == NULL || *key == '\0')
{
return (NULL);
}
index = key_index((const unsigned char *)key, ht->size);
tmp = ht->array[index];
while (tmp != NULL)
{
if (strcmp(tmp->key, key) == 0)
{
return (tmp->value);
}
tmp = tmp->next;
}
return (NULL);
}
