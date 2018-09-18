#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 *
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
