#include "dog.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - dsds
 * @name: dafdf
 * @age: daf
 * @owner: dfa
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
int i, len_name = 0, len_owner = 0;
if (name == NULL || owner == NULL)
{
return (NULL);
}
d = malloc(sizeof(dog_t));
if (d == NULL)
{
return (NULL);
}
while (name[len_name] != '\0')
{
len_name++;
}
while (owner[len_owner] != '\0')
{
len_owner++;
}
d->name = malloc(len_name + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}
d->owner = malloc(len_owner + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
for (i = 0; i < len_name; i++)
{
d->name[i] = name[i];
}
d->name[i] = '\0';
for (i = 0; i < len_owner; i++)
{
d->owner[i] = owner[i];
}
d->owner[i] = '\0';
d->age = age;
return (d);
}
