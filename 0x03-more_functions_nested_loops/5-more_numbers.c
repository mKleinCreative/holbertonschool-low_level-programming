#include "holberton.h"

/**
 * more_numbers - prints 0-14 10 times
 *
 * Return: (Success)
 */

void more_numbers(void)
{
	int inner, outer;

	for (outer = 1; outer <= 10; outer++)
	{
		for (inner = 0; inner <= 14; inner++)
		{
			if (inner >= 10)
			{
				_putchar((inner / 10) + '0');
			}
			_putchar(inner % 10 + '0');
		}
		_putchar('\n');
	}
}
