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
	int bit;

	if (index >> 31)
		return (-1);
	bit = 1 << index;

	*n = *n | bit;

	return (1);
}

