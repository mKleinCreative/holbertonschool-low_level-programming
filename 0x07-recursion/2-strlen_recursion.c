#include "holberton.h"

/**
 * _strlen_recursion - returns the length of the string
 * @s: string to find the length of.
 * Return: (Success)
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

