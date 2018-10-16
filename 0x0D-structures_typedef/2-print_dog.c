#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - prints a dog struct
 * @d: pointer to the dog struct to print.
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name)
		printf("Name: %s\n", d->name);
	else if (!d->name)
		printf("Name: (nil)");
	if (d->age)
		printf("Age: %f\n", d->age);
	else if (!d->age)
		printf("Age: (nil)");
	if (d->owner)
		printf("Owner: %s\n", d->owner);
	else if (!d->owner)
		printf("Owner: (nil)");
}
