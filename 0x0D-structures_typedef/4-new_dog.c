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

	if (d == NULL)
		return;
	if (!name || !owner)
		return (NULL);
	d = malloc(sizeof(struct dog));
	if (d == NULL)
		return (NULL);
	d->name = malloc(strlen(name) + 1) * sizeof(char);
	if (d->name == NULL)
	{
		d->name = NULL;
		free(d);
	}
	d->owner = malloc((strlen(owner) + 1) * sizeof(char));
	if (d->owner == NULL)
	{
		d-owner = NULL;
		free(name);
		free(d);
	}
	d->age = age;
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	return (d);
}
