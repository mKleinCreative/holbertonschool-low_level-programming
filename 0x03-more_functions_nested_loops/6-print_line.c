#include "holberton.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: number of lines to print
 * Return: (Success)
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i <= n; i++)
		_putchar('_');
	_putchar('\n');
}

