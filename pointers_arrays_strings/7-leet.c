#include "main.h"
/**
* leet - Encodes a string into 1337.
* @s: The input string.
* Return: The modified string.
*/
char *leet(char *s)
{
char *p = s;
char letters[] = "aAeEoOtTlL";
char numbers[] = "4433007711";
int i;
while (*p)
{
for (i = 0; letters[i]; i++)
{
if (*p == letters[i])
{
*p = numbers[i];
}
}
p++;
}
return (s);
}
