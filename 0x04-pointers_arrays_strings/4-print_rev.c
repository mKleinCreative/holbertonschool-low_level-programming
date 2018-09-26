#include "holberton.h"
#include <stdio.h>
/**
 * print_rev - Entry point
 * @s: string to reverse
 * Return: reversed string
 */

void print_rev(char *s)
{
	int j, len, i;

	j = 0;
	len = 0;
	for (i = 0; s[i] != '\0'; i++)
		len++;
	for (j = len - 1; j >= 0; --j)
		_putchar(s[j]);
	_putchar('\n');
}
