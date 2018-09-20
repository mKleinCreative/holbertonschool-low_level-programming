#include <stdio.h>

/**
 * main - prints the largest prime factor of a specific number
 * Description: finds and prints the largest prime factor of the number
 * 61285247514
 * Return: (Success)
 */

int main(void)
{
	unsigned long int number, div, maxFact;

	number = 612852475143;
	div = 2;
	while (number != 0)
	{
		if (number % div != 0)
			div = div + 1;
		else
		{
			maxFact = number;
			number = number / div;
		}
		if (number == 1)
		{
			printf("%li", maxFact);
			break;
		}
	}
	return (0);
}
