/**
 *  _memcpy - copies given memory area 
 * @dest: memory area to copy to
 * @src: memory area to copy from.
 @ @n: size of memory to copy from src
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int counter;

	counter = 0;
	while (counter < n)
	{
		*dest++ = *src++;
		counter++;
	}

	return (dest);
}
