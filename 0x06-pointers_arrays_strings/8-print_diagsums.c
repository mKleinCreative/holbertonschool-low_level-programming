#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: memory area pointed to.
 * @size: constant byte to fill memory with.
 * Return: sums
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int sum1, sum2;

	sum1 = sum2 = 0;
	for (i = 0; i < (size * size); i++)
	{
		if ((i % size) == 0)
		{
			++i;
			sum1 = sum1 + *(a + i);
		}
	}
	for (j = size * size; j > 0; j--)
	{
		if ((i % (size - 1) == 0))
			sum2 = sum2 + *(a + j);
	}

	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
