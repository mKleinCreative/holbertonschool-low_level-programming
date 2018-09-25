#include "holberton.h"

/**
 * puts2 - prints one char out of 2 in a string follow by new line.
 * @str: string to print;
 * Return: (Success)
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!(i % 2))
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
