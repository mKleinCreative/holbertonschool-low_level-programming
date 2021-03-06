#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array of size bites
 * @nmemb: what to fill array with
 * @size: type of byte to allocate for memory
 * Return: returns pointer to allocated memory otherwise NULL on fail
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	arr = malloc(nmemb * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
		arr[i] = 0;
	return ((void *)arr);
}

