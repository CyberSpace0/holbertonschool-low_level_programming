#include <stdio.h>
#include "main.h"

/**
 * _strcmp - concatenate two strings
 * @s1: destination string
 * @s2: source string
 * Return: pointer to dest
 */
#include <stdio.h>
#include "main.h"

/**
 * _strcmp - concatenate two strings
 * @s1: destination string
 * @s2: source string
 * Return: pointer to dest
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;
while (s1[i] == s2[i] && s1[i] != '\0')
{
i++;
}
return (s1[i] - s2[i]);
}
