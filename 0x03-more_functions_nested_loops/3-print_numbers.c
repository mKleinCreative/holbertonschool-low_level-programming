#include "holberton.h"
/**
 * print_numbers- prints numbers from 0-9 followed by \n
 *
 * Return: (Success)
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		_putchar(i + '0');
	_putchar('\n');
}

