#include <stdio.h>
#include <stdlib.h>

/**
 *  array_iterator - executes a function on a given element of an array
 * @array: array to iterate over.
 * @size: size of array to iterate over
 * @action: function to apply to array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!size || !array || !action)
		return;
	for (; size; size--)
		action(*array++);
}
