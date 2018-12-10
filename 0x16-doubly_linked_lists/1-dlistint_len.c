#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len -returns number of elements in DLL
 * @h: pointer to head of DLL to count
 * Return: number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	if (!h)
		return (0);
	count = 0;
	while (h->next)
	{
		count++;
		h = h->next;
	}
	return (++count);
}

