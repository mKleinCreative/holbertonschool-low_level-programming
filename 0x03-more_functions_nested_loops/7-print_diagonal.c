#include "holberton.h"
/**
 * print_diagonal - draws a diagonal line in terminal
 * @n: number of lines to print
 * Return: (Success)
 */

void print_diagonal(int n)
{
	int spaces, rows;

	if (n <= 0)
		_putchar('\n');
	for (rows = 0; rows < n; rows++)
	{
		for (spaces = 0; spaces < rows; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
