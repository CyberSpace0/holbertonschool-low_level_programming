#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* _calloc - entry point
* @nmemb: length
* @size: length
* Return: always (0) success
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *ptr;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb; i++)
{
ptr[i] = 0;
}
return ((void *)ptr);

}

