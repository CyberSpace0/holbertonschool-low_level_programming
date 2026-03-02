#include <stdio.h>
#include <ctype.h>

int _isdigit(int c)
{
return ((isdigit(c) != 0) ? 1 : 0);
}