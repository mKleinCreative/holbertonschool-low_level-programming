#include "holberton.h"
/**
 * print_chessboard - prints a chessboard
 * @a: given board to print out.
 **/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
			_putchar(*(*a + i * 8 + j));
		_putchar('\n');
	}
}
