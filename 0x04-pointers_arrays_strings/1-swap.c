/**
 * swap_int - swaps the values of two integers.
 *
 * @a: one of two integers to swap.
 * @b: two of two integers to swap.
 * Return: (Success)
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
