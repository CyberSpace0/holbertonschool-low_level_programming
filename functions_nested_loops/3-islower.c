#include "main.h"

/**
* _islower - entry point
* Return: always (0) success
*/
int _islower(int c)
{
char lower[] = "qwertyuioplkjhgfdsazxcvbnm";
int i;
double val;

for (i = 0; i < 26; i++)
{
if (c == lower[i])
{
val = (c == lower[i]);
return _putchar(val);
}

}


}
