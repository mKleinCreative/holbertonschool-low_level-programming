#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - initializes a dog struct
 * @name: name of the dog created.
 * @age: age of the dog created.
 * @owner: owner of created dog.
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *d;

	d = malloc(sizeof(d));
	if (d == NULL)
		return (NULL);
	if (!name || !owner)
		return (NULL);
	d->name = name;
	if (age)
		d->age = age;
	d->owner = owner;
	return (d);
}
