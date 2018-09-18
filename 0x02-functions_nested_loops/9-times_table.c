#include "holberton.h"

/**
 * times_table - Entry point
 * prints out a multiplication table showing all the products for the range
 * 0 - 9
 * Return: (Success)
 */

void times_table(void)
{
	int outerCount, innerCount, current;

	outerCount = innerCount = 0;
	while (outerCount < 10)
	{
		while (innerCount < 10)
		{
			if (innerCount == 0)
			{
				_putchar(innerCount + '0');
				_putchar(',');
				innerCount++;
			}
			current = outerCount * innerCount;
			if (current < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(current + '0');
				if (innerCount != 9)
					_putchar(',');
			} else
			{
				_putchar(' ');
				_putchar((current / 10) + '0');
				_putchar((current % 10) + '0');
				if (innerCount != 9)
					_putchar(',');
			}
			if (innerCount == 9)
			{
				_putchar('\n');
				innerCount++;
				continue;
			}
			innerCount++;
		}
		innerCount = 0;
		outerCount++;
	}
}
