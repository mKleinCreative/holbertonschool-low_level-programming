#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - executes a function on a given element of an array
 * @array: array to iterate over.
 * @size: size of array to iterate over
 * @cmp: function that compares values.
 * Return: index of matched element.
 */

int int_index(int *array, size_t size, int (*cmp)(int))
{
	int temp;

	temp = size;
	if (!array || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (; size; size--)
		if (cmp(array[temp - size]))
			return (temp - size);
	return (-1);
}
