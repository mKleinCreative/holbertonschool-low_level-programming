#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * create_array - creates an array of chars and inits with specific char
 * @size: size of array to create.
 * @c: character to populate with.
 * Return: pointer to array created, or NULL if fails.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *new_arr;

	if (size == 0)
		return (NULL);
	new_arr = malloc(sizeof(char) * size);
	if (new_arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		new_arr[i] = c;
	return (new_arr);
}

