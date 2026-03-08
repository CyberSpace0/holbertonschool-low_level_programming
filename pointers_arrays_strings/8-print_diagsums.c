#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Entry function
 * @a: int value from pointer
 * @size: int value
 * Return: always int value
 */
void print_diagsums(int *a, int size)
{
int i = 0;
int result = 0;
int num = 0;
for (i = 0; i < size; i++)
{
result = result + (a[i * size + i]);
num = num + (a[i * size + (size - 1 - i)]);
}
printf("%i, %i\n", result, num);

}
