#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: the starting point of the algorithm, it will go from here to 98
 * Return: (Success)
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", 98);
	} else if (n > 98)
	{
		for (; n > 97; n--)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
		}
	} else if (n < 98)
	{
		for (; n < 99; n++)
		{
			if (n == 98)
				printf("%d\n", n);
			else
				printf("%d, ", n);
		}
	}
}
