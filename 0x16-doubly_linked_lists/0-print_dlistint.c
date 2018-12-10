#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint -prints all elements of a dlinkedlist
 * @h: head of LL to print
 * Return: number of nodes in the list
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	if (!h)
		return (0);
	count = 0;
	while (h->next)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	printf("%d\n", h->n);
	return (++count);
}

