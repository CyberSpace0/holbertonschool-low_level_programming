#include "dog.h"
#include "main.h"
#include <stdio.h>

/**
 * void print_dog(struct dog *d)
 - check the code
 * @d: dafdf
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf('\n');
}
else
{
if (d->name == NULL)
{
printf("nil");
}
else
{
printf("Name: %s\n", d->name);
}
printf("Age: %f\n", d->age);
if (d->owner == NULL)
{
printf("nil");
}
else
{
printf("Owner: %s\n", d->owner);
}
}
}
