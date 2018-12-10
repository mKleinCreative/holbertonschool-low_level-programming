#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - inserts a node at the end of the DLL
 * @head: head of list to append node too.
 * @n: value of new node to add to list.
 * Return: address of new element or NULL if failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last = *head;

	new = (malloc(sizeof(dlistint_t)));
	if (!new)
		return (NULL);
	if (*head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
		new->n = n;
		*head = new;
		return (*head);
	}
	do {
		if (last->next == NULL)
		{
			last->next = new;
			new->next = NULL;
			new->prev = last;
			new->n = n;
			return (*head);
		}
		last = last->next;
	} while (last);
	free(new);
	return (*head);
}

