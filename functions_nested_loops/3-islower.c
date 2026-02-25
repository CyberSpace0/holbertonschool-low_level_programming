#include "main.h"

/**
* _islower - entry point
* int c is input value from user
* Return: always (0) success
*/
int _islower(int c)
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
