#include "holberton.h"
#include <stdio.h>
/**
 * puts2 - prints one char out of 2 in a string follow by new line.
 * @str: string to print;
 * Return: (Success)
 */

void puts2(char *str)
{
	int i, length;

	length = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (!(i % 2))
			_putchar(str[i]);
		else
			continue;
	}
}
