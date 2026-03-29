#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int _strlen(char *str);

/**
* create_array - entry point
* @c: length
* @size: char
* Return: always (0) success
*/
char *_strdup(char *str)
{
char *arr;
unsigned int i;

if (str == NULL)
{
return (NULL);
}
arr = malloc(_strlen(str) * sizeof(char));
if (arr == NULL)
{
return (NULL);
}
for (i = 0; i < _strlen(str); i++)
{
arr[i] = str[i];
}
return (arr);

}

/**
 * _strlen - returns the length of a string
 * @str: string to measure
 *
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