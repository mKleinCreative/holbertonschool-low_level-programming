
int prime_check(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else if (n % i != 0)
		return (prime_check(n, i - 1));
	return (0);
}
/**
 * is_prime_number - returns 1 if the input is prime
 * @n: number to find if its prime number.
 * Return: (Success)
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(n, n - 1));
}

