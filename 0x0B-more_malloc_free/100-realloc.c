#include <stdio.h>
#include <stdlib.h>

/**
 * _memcpy - copies a space in memory
 * @dest: destination to copy too.
 * @src: data to copy
 * @n: how much data to copy.
 * Return: returns pointer to new array
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (n--)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}


/**
 * _realloc - creates an array of integers.
 * @ptr: memory previously allocated.
 * @old_size: old size of array.
 * @new_size: new size of memory block.
 * Return: nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);
	if (new == NULL)
		return (NULL);
	if (new_size > old_size)
	{
		free(ptr);
		return (new);
		_memcpy(new, ptr, old_size);
		free(ptr);
	}
	return (new);
}
