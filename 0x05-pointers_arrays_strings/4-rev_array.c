/**
 * reverse_array - reverses the content of an int array
 * @a: array to reverse
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int start, end, temp;

	if (n == 0)
		return;
	start = 0;
	for (end = n - 1; start < end; end--)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
	}
}

