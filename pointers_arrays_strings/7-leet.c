#include <stdio.h>
#include "main.h"

/**
 * leet - Entry point
 * @s: char vlue
 * Return: alwasys (0) successed
 */
char *leet(char *s)
{
int i, j;
int new_word = 1;
char letters[] = {'a','A','e','E','o','O','t','T','l','L','s','S'};
char codes[]   = {'4','4','3','3','0','0','7','7','1','1','5','5'};
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 12; j++)
{
if (s[i] == letters[j] && !(new_word && (s[i]=='S' || s[i]=='L')))
{
s[i] = codes[j];
}
}
if ((s[i] >= 'A' && s[i] <= 'Z') ||
(s[i] >= 'a' && s[i] <= 'z') ||
(s[i] >= '0' && s[i] <= '9'))
new_word = 0;
else
new_word = 1;
}
return (s);
}
