#include <stdio.h>
#include <stdlib.h>

/**
 * set_bit - sets a bit at a given location
 * @n: pointer to an unsigned long int
 * @index: index of the bit you want to set
 * Return: (Success)
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n && index)
		return (*n = *n | 1UL << index);
	else
		return (-1);
	return (-1);
}

