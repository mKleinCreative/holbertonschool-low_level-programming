#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initializes a dog struct
 * @d: pointer to the dog struct.
 * @name: name of the dog created.
 * @age: age of the dog created.
 * @owner: owner of created dog.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
