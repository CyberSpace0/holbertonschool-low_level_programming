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

index = key_index((unsigned long char)key, ht->size);

return (ht->array[index]->value);
}
