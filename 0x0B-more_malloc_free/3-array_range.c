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
	int i, range, j, *arr;

	if (min > max)
		return (NULL);
	for (range = 0; range <= max - min; range++)
		;
	arr = malloc(sizeof(int) * range);
	if (arr == NULL)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	{
		arr[j] = i;
		j++;
	}
	return (arr);
}

