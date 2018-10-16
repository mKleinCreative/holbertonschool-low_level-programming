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
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d);
	}
}

