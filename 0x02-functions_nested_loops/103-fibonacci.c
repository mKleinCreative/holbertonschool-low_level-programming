#include <stdio.h>

/**
 * multiply - Helper function that multiplies
 * 2 matrices F and M of size 2*2, and
 * @F: fibonacci matrix 1
 * @M: fibo matrix 2
 *  puts the multiplication result back to F[][]
 */
void multiply(int F[2][2], int M[2][2]);

/**
 * power - calculates F[][] raise to the power n and puts the
 *  result in F[][]
 * @F: array keeping factorial arrangement
 * @n: it is the nth power
 */
void power(int F[2][2], int n);

/**
 * fib - does fibonacci logic
 * @n: nth fibo coming in
 * Return: fibonacci number nth in fibo sequence
 */
int fib(int n)
{
	int F[2][2] = {{1, 1}, {1, 0}};

	if (n == 0)
		return (0);
	power(F, n - 1);

	return (F[0][0]);
}

/**
 * multiply - handles matrix multiplication.
 * @F: matrix one for factorials
 * @M: matrix factorial to multiply against
 */
void multiply(int F[2][2], int M[2][2])
{
	int x, y, z, w;

	x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
	y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
	z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
	w = F[1][0] * M[0][1] + F[1][1] * M[1][1];

	F[0][0] = x;
	F[0][1] = y;
	F[1][0] = z;
	F[1][1] = w;
}

/**
 * power - calculates power to n for fibo
 * @F: fibonacci number to multiply against
 * @n: which part of fibo sequence
 */

void power(int F[2][2], int n)
{
	int i;
	int M[2][2] = {{1, 1}, {1, 0}};

	for (i = 2; i <= n; i++)
		multiply(F, M);
}
/**
 * main - Driver program to test above function
 * Return: sum of all even fibo below 4 mil
 */
int main(void)
{
	int n;
	int current;
	int sum;

	for (n = 2; n <= 33; n++)
	{
		current = fib(n);
		if (current % 2)
			sum += current;
	}
	printf("%d\n", sum);
	return (0);
}
