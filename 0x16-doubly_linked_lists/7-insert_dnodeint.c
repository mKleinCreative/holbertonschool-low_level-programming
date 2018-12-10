#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head of the DDL to insert new node into.
 * @idx: index to insert node into.
 * @n: data of new node to insert.
 * Return: address of new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *tmp, *new;

	tmp = *h;
	if (!n)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	if (!(*h) && idx == 0)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}
	i = 0;
	while (tmp != '\0')
	{
		if (i + 1 == idx)
		{
			new->next = tmp->next;
			new->prev = tmp->prev;
			new->n = n;
			tmp->next = new;
			return (new);
		}
		i++;
		tmp = tmp->next;
	}
	return (NULL);
}

