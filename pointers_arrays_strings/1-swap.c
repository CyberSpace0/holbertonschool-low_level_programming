#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - Entry function
 * @n: int value from pointer
 * Return: always int value
 */
void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
