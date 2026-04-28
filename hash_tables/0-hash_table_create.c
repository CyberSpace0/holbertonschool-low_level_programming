#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
* main - entry point
* Return: always (0) success
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *table;

table = malloc(sizeof(hash_table_t));
table->size = size;
return (table);
}
