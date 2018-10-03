/**
 * factorial - returns factorial of a given number
 * @n: number to find factorial of.
 * Return: factorial or -1 if there's an error
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

