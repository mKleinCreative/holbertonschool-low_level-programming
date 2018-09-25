#include "holberton.h"

/**
 * puts_half - prints the second half of a string
 * @str: string to print half of.
 */

void puts_half(char *str)
{
	int half, i, length;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
		length++;

	if (!(length % 2))
		half = length / 2;
	else
		half = (length + 1) / 2;

	for (i = half; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}

