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
char *ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
if (nmemb == 0 || size == 0)
{
return (NULL);
}
for (i = 0; i < nmemb; i++)
{
ptr[i] = 0;
}
return (ptr);

}


/**
 * _strlen - returns the length of a string
 * @str: string to measure
 * Return: length of the string
 */
unsigned int _strlen(char *str)
{
unsigned int len = 0;
while (str[len] != '\0')
{
len++;
}
return (len);
}
