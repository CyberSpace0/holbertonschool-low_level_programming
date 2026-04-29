#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>



/**
* hash_djb2 - entry point
* @str: string to generate the real key for dictionary
* Return: always (0) success
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long int hash;
int c;
hash = 5381;
while ((c = *str++))
{
hash = ((hash << 5) + hash) + c;
}
return (hash);
}