/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer that the function will use to store result
 * @size_r: size of the buffer
 * Return: return r, or if result cannot be stored in r, return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int n1Length, n2Length, result, counter, remainder;

	size_r = size_r - 1;
	remainder = 0;
	counter = 0;
	while (*(n1 + n1Length) != '\0')
		n1Length++;
	while (*(n2 + n2Length) != '\0')
		n2Length++;
	if (n1Length > size_r || n2Length > size_r)
		return (0);
	while(counter < size_r)
	{
		r[counter];
		counter++;
	}
	for (counter; counter >= 0; counter--)
	{
		/*result = (((n1[n1Length] - 48) + (n2[n2Length] - 48)) + remainder);*/
		/* remainder = result / 10;*/
		/*r[counter] = (result % 10) + 48;*/
		n1Length--;
		n2Length--;
	}
	return (r);
}
