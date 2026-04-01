#include "dog.h"
#include "main.h"
#include <stdio.h>

/**
 * init_dog - check the code
 * @d: dafdf
 * @name: dfadfa
 * @age: float
 * @owner: dfasf
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
printf("Name: %s\n", d->name);
printf("Age: %lf\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
