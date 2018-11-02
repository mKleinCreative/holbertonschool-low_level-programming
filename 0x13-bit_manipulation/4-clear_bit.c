#include <stdio.h>
#include <stdlib.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to iterate over
 * @index: index to clear at
 * Return: 1 if worked or -1 if there was an error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index > 31)
		return (-1);
	bit = ~(1 << index);

	*n = *n & bit;

	return (1);
}

