#include <stdio.h>
#include <ctype.h>
/**
* _isdigit - Entry functino
* @c:   int value
* Return: always (0) Success
*/
int _isdigit(int c)
{
return ((isdigit(c) != 0) ? 1 : 0);
}
