#include "holberton.h"
/**
 * print_alphabet_x10 - Entry point
 * prints the alphabet followed by a newline x10 times.
 * Return: (Success)
 */

void print_alphabet_x10(void)
{
	int ch;
	int count;

	count = 0;
	while (count < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		count++;
		_putchar('\n');
	}
}
