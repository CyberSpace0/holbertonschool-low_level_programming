#include "dog.h"
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int _strlen(char *str);
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
len_name = _strlen(name);
len_owner = _strlen(owner);
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


int _strlen(char *str)
{
int len_name;
while (str[len_name] != '\0')
{
len_name++;
}
return len_name;
}

char *_strdup(char *str)
{
int len = 0, i;
char *copy;
if (!str)
{
return NULL;
}
while (str[len])
{
len++;
}
copy = malloc(len + 1);
if (!copy)
{
return NULL;
}
for (i = 0; i <= len; i++)
{
copy[i] = str[i];
}
return (copy);
}