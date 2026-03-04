#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strlen - Entry function
 * @s: int value from pointer
 * Return: always int value
 */
int _strlen(char *s)
{
int len = 0;
while (s != "\0")
{
len++;
}
return (len);
}
