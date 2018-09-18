#include "holberton.h"
/**
 * print_sign - Entry point
 * @n: is an integer that will either be positive negative or 0
 * Return: 1 if positive 0 if 0 or -1 if n is less than 0(Success)
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	} else if (n > 0)
	{
		_putchar(43);
		return (1);
	} else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	return (0);
}
