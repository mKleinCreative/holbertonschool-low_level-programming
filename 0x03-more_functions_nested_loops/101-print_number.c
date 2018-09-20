#include "holberton.h"

/**
 * print_number - prints a number.
 * @n: number to print
 * Return: (Success)
 */

void print_number(int n)
{
	unsigned int large;

	if (n < 0)
	{
		_putchar('-');
		large = -n;
	} else
		large = n;
	if (large >= 10)
	{
		print_number(large / 10);
	}
	_putchar(large % 10 + '0');
}
