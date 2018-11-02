#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number to print
 * Return: number converted to binary
 */

void print_binary(unsigned long int n)
{
	unsigned int i = 0;
	int flag = 0;
	unsigned int highestOne = 1 << ((sizeof(unsigned int) * 8) - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n & (highestOne >> i)) != 0)
			flag = 1;
		if (flag)
			_putchar(((n & (highestOne >> i)) != 0) + '0');
	}
}

