#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * puts_half - Entry function
 * @dest: char value from pointer
 * @src: char value
 * Return: always int value
 */

char *_strcpy(char *dest, char *src)
{
int len = 0;
char ki[1000];
int i,x;
do
{
len++;
} while (src[len] != '\0');

for (i = 0; i < len; i = i + 1)
{
ki[i] = src[i];
}

for (x = 0; x < len; x = x + 1)
{
*(dest + x) = ki[x];
}

return (dest);

}
