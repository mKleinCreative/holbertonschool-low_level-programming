#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * malloc_checked - Entry point
 * @b: size of memory allocated
 * Return: pointer to the allocated memory.
 */

void *malloc_checked(unsigned int b)
{
	void *allocated;

	allocated = malloc(b);
	if (allocated == NULL)
		exit(98);
	return (allocated);
}

