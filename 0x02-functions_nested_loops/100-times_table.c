#include "holberton.h"

/**
 * num_of_spaces - prints spaces to keep things pretty
 * @num: prints the number of spaces required to keep everything inline.
 * Description: provides 1 space for single digit numbers,
 * 2 for double and 3 for triple digit numbers.
 *
 * Return: The sum given the two arguements. (Success)
 */

static void num_of_spaces(int num)
{
	if (num >= 100)
	{
		_putchar(' ');
	} else if (num <= 99 && num >= 10)
	{
		_putchar(' ');
		_putchar(' ');
	} else
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
	}
}

/**
 * format_product - creates each column/row combination
 * @row: current row of times table.
 * @col: current column of times table.
 * @total: what the times table is heading towards.
 * Return: The sum given the two arguements.
 */

static void format_product(int row, int col, int total)
{
	int product, first, second, third;

	product = row * col;
	first = product / 100;
	second = ((product / 10) % 10);
	third = product % 10;
	if (col == 0)
	{
		_putchar(product + '0');
		_putchar(',');
		return;
	}
	if (product >= 100)
	{
		num_of_spaces(product);
		_putchar(first + '0');
		_putchar(second + '0');
		_putchar(third + '0');
		if (col == total)
			_putchar('\n');
		else
			_putchar(',');
	} else if (product <= 99 && product >= 10)
	{
		num_of_spaces(product);
		_putchar(second + '0');
		_putchar(third + '0');
		if (col == total)
			_putchar('\n');
		else
			_putchar(',');
	} else
	{
		num_of_spaces(product);
		_putchar(third + '0');
		if (col == total)
			_putchar('\n');
		else
			_putchar(',');
	}
}

/**
 * print_times_table - Entry point
 * @n: total number
 * Description: Prints an n sized times table.
 * Return: The sum given the two arguements. (Success)
 */

void print_times_table(int n)
{
	int rows;
	int columns;

	if (n > 15 || n < 0)
		return;
	for (rows = 0; rows <= n; rows++)
	{
		for (columns = 0; columns <= n; columns++)
		{
			format_product(rows, columns, n);
		}
	}
}
