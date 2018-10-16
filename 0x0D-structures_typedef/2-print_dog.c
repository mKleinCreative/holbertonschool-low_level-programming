#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a dog struct
 * @d: pointer to the dog struct to print.
 */

void print_dog(struct dog *d)
{
	if (!d)
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)");
	if (d->age)
		printf("Name: %f\n", d->age);
	else
		printf("Name: (nil)");
	if (d->owner)
		printf("Name: %s\n", d->owner);
	else
		printf("Name: (nil)");
}
