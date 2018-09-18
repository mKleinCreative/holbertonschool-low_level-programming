#include "holberton.h"
/**
 * jack_bauer - Entry point
 * prints out the time in this format HH:MM
 * for 24 hours.
 * Return: (Success)
 */

void jack_bauer(void)
{
	int hr1, hr2, min1, min2;

	hr1 = 0;
	hr2 = 0;
	min1 = 0;
	for (min2 = 0; hr1 <= 2 && hr2 <= 10; min2++)
	{
		_putchar(hr1 + '0');
		_putchar(hr2 + '0');
		_putchar(':');
		_putchar(min1 + '0');
		_putchar(min2 + '0');
		if (min2 == 9 && min1 != 5)
		{
			min1++;
			min2 = -1;
		}
		if (min1 == 5 && min2 == 9)
		{
			if (hr1 == 2 && hr2 == 3)
				break;
			hr2++;
			min1 = 0;
			min2 = -1;
			if (hr2 == 10)
			{
				hr1++;
				hr2 = 0;
				min1 = 0;
				min2 = -1;
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
