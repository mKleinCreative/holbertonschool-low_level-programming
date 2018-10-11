#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: smallest int.
 * @max: largest int.
 * Return: pointer to array of all values from min to max
 */

int *array_range(int min, int max)
{
	int i, range,*arr;

	if (min > max)
		return (NULL);
	range = max - min;
	arr = malloc(sizeof(int) * range + 1);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < range; i++)
		arr[i] = i + min;
	arr[i] = max;
	return (arr);
}

