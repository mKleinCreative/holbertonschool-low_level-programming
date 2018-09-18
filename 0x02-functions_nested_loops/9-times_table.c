#include "holberton.h"

/**
 * main - Entry point
 *
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
				if (innerCount == 9)
				{
					_putchar('\n');
					innerCount++;
					continue;
				}
				_putchar(',');
			} else
			{
				_putchar(' ');
				_putchar((current / 10) + '0');
				_putchar((current % 10) + '0');
				if (innerCount == 9)
				{
					_putchar('\n');
					innerCount++;
					continue;
				}
				_putchar(',');
			}
			innerCount++;
		}
		innerCount = 0;
		outerCount++;
	}
}
