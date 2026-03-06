#include <stdio.h>
#include "main.h"

/**
 * reverse_array - concatenate two strings
 * @a: destination string
 * @n: source string
 * Return: pointer to dest
 */
void reverse_array(int *a, int n)
{
int i, temp;
for (i = 0; i < n / 2; i++)
{
temp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = temp;
}
}
