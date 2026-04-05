#include "function_pointers.h"
#include <stdio.h>

/**
* print_name - entry point
* Return: always (0) success
*/
void print_name(char *name, void (*f)(char *))
{
void (*ptr)(char *);
ptr = f;
ptr(name);

}
