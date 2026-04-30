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
long unsigned int i;
printf("{");
if (ht != NULL)
{
for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
if (ht->array[i + 1] == NULL)
{
printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
}
printf("'%s': '%s', ", ht->array[i]->key, ht->array[i]->value);
}
}
}
printf("}");
}
