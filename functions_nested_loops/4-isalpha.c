#include "main.h"

/**
* _isalpha - entry point
* * @c: the character to check
* Return: always (0) success
*/
int _isalpha(int c)
{
char lower[] = "qwertyuioplkjhgfdsazxcvbnm";
int i;

for (i = 0; i < 26; i++)
{
if (c == lower[i])
{
return (1);
}

}
return (0);

}
