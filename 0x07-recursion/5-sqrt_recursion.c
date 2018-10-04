/**
 * square - returns the number squared.
 * @x: number to square.
 * Return: returns the number multiplied by itself.
 */
int square(int x)
{
	return (x * x);
}

/**
 * squareRootNatTest - tests to see if the number is a natural square root.
 * @n: number to find the sqrt of.
 * @k: number to iterate through and check against n.
 * Return: returns the natural sqrt or -1 if it doesnt have one.
 */


int squareRootNatTest(int n, int k)
{
	if (square(k) >= n)
	{
		if (square(k) > n)
			return (-1);
		return (k);
	}
	else
		return (squareRootNatTest(n, k + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to find the sqrt of.
 * Return: returns the natural sqrt or -1 if it doesnt have one.
 */


int _sqrt_recursion(int n)
{
	return (squareRootNatTest(n, 0));
}

