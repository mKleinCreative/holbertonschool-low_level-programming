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
	int sum1, sum2;

	sum1 = sum2 = 0;
	i = j = 0;
	while (i < size)
	{
		sum1 += *(a + i * size + j);
		sum2 += *(a + i * size + (size - 1 - j));
		i++;
		j++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
