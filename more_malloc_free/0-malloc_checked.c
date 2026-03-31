#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* malloc_checked - entry point
* @b: length
* Return: always (0) success
*/
void *malloc_checked(unsigned int b)
{
int *ptr;
ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);

}
