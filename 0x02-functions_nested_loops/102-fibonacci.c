#include <stdlib.h>
#include <stdio.h>

/**
 * main - prints the first 50 fobonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long current;
	long previous;
	int count;
	long next;

	current = 2;
	previous = 1;

	for (count = 0; count <= 50; count++)
	{
		printf("%lu, ", previous);
		next = previous + current;
		previous = current;
		current = next;
	}
	return (0);
}
