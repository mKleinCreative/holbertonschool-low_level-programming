#include <stdio.h>
#include <stdlib.h>

/**
 * flip_bits - returns the difference of bits between two numbers
 * @n: number one
 * @m: number two
 * Return: (Success)
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int difference = m ^ n;
	while (difference)
		difference &= (difference - 1);
	return difference;
}

