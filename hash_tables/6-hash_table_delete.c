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
free(ht);
}
