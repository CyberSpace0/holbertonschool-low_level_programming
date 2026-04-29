#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
* key_index - entry point
* @key: string to generate the real key for dictionary
* @size: size of array
* Return: always (0) success
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
return (key % size);
}
