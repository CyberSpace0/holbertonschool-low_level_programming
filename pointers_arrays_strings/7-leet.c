#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 * Return: pointer to s
 */
char *leet(char *s)
{
int i, j;
char letters[] = {'a','A','e','E','o','O','t','T','l','L','s','S'};
char codes[]   = {'4','4','3','3','0','0','7','7','1','1','5','5'};
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 12; j++)
{
if (s[i] == letters[j])
{
s[i] = codes[j];
}
}
}
return s;

}
