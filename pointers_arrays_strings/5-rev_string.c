#include <stdio.h>
#include <string.h>

/**
 * rev_string - Entry function
 * @sa: char value from pointer
 * Return: always int value
 */

void rev_string(char *s)
{
int len = 0;
char ki[1000];
int i,x;
while (s[len] != '\0')
{
len++;
}
for (i = 0; i < len; i++)
{

ki[i] = s[len - 1 - i]; 
}

for (x = 0; x < len; x++)
{
*(s + x) = ki[x];
}

}
