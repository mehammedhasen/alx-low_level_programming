#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * new_dog - code initialize a dog data structure.
 * @name: dog name
 * @age: dog's age.
 * @owner: dog's owner
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *d;
d = malloc(sizeof(struct dog));
if (d == NULL)
return (NULL);
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
