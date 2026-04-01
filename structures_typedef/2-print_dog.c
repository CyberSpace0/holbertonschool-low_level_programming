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
printf("");
}
else
{
if (d->name == NULL)
{
d->name = "nil";
}
if (d->age == NULL)
{
d->age = "nil";
}
if (d->owner == NULL)
{
d->owner = "nil";
}

printf("Name: %s\n", d->name);
printf("Age: %lf\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
