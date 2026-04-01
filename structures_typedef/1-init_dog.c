#include "dog.h"
#include "main.h"
#include <stdio.h>
#include "main.h"

/**
 * init_dog - check the code
 * @b: dafdf
 * @name: dfadfa
 * @age: float
 * @owner: dfasf
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
{
printf("Ok");
}
else
{
d -> name = name;
d -> age = age;
d -> owner = owner;
}
}