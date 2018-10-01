/**
 * memset - fills memory with a constant byte
 * @s: memory area pointed to.
 * @c: constant byte to fill memory with.
 @ @n: size of memory area to fill
 * Return: pointer to s
 */

void *_memset(char *s, char b, unsigned int n)
{
	int counter;

	counter = 0;
	while (counter < n)
	{
		*(s + counter) = b;
		counter++;
	}
	return (s);
}

