#include "holberton.h"

/**
 * rev_string - reverses a string
 * @s: character array to reverse
 */

void rev_string(char *s)
{
	char *first, *last, c;

	first = s;
	last = s;

	while (*last)
		++last;
	if (first < last)
	{
		for (; first < --last; ++first)
		{
			c = *first;
			*first = *last;
			*last = c;
		}
	}
}
