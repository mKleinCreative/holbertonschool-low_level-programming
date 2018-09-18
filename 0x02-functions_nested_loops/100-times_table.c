#include <stdio.h>
#include "holberton.h"

static void format_product(int row, int col, int total);
static void num_of_spaces(int num);

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

/**
 * format_product - creates each column/row combination
 * @row: current row of times table.
 * @col: current column of times table.
 * @total: what the times table is heading towards.
 * Return: The sum given the two arguements.
 */

void format_product(int row, int col, int total)
{
	int product;

	product = row * col;
	if (col == total)
	{
		num_of_spaces(product);
		printf("%d\n", product);
	} else
	{
		num_of_spaces(product);
		printf("%d,", product);
	}
}

/**
 * num_of_spaces - prints spaces to keep things pretty
 * @num: prints the number of spaces required to keep everything inline.
 * Description: provides 1 space for single digit numbers,
 * 2 for double and 3 for triple digit numbers.
 *
 * Return: The sum given the two arguements. (Success)
 */

void num_of_spaces(int num)
{
	if (num >= 100)
	{
		printf(" ");
	} else if (num <= 99 && num >= 10)
	{
		printf("  ");
	} else
	{
		printf("   ");
	}
}
