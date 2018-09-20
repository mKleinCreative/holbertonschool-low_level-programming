#include "holberton.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the triangle
 * Return: (Success)
 */

void print_triangle(int size)
{
	int spaces, hashes, row;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	for (row = 0; row <= size - 1; row++)
	{
		for (spaces = 0; spaces < (size - 1) - row; spaces++)
		{
			_putchar(' ');
		}
		for (hashes = 0; hashes <= row; hashes++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
