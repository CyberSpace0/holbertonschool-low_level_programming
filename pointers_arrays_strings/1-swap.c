#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - Entry function
 * @a: int value from pointer
 * @b: int value from pointer
 * Return: always int value
 */
void swap_int(int *a, int *b)
{
int x = *a;
*a = *b;
*b = x;
}
