#include "holberton.h"

/**
 * print_alphabet - Entry point
 * Prints out the alphabet compiled together.
 * Return: (Success)
 */

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
