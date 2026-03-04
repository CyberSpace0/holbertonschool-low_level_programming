#include <stdio.h>
#include "main.h"

/**
 * swap_int - Entry function
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
