#include "holberton.h"

/**
 * print_square - prints a square
 * @size: size of square to be printed
 * Return: (Success)
 */

void print_square(int size)
{
	int height, width;

	if (size <= 0)
		_putchar('\n');
	for (height = 0; height < size; height++)
	{
		for (width = 0; width < size; width++)
			_putchar('#');
		_putchar('\n');
	}
}
