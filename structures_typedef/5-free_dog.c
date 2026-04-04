#include "dog.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - dsds
 * @d: dafdf
 * Return: Always 0.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}

}
