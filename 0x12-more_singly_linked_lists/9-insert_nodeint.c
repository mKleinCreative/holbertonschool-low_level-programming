#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * new_node - creates a LL data node.
 * @n: data to insert into new node.
 * Return: address of new node or NULL if failed.
 */

static listint_t *new_node(int n)
{
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);
	node->n = n;
	node->next = NULL;
	return (node);
}

/**
 * insert_nodeint_at_index - inserts a data node at given index into LL
 * @head: pointer to the head of the list
 * @idx: index to insert into
 * @n: data to insert into idx spot in LL
 * Return: address of new node or NULL if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new;
	unsigned int i;

	temp = *head;
	if (!head)
		return (NULL);
	if (!(*head) && idx == 0)
	{
		*head = new_node(n);
		return (*head);
	}
	for (i = 0; temp != '\0'; i++)
	{
		if (i + 1 == idx)
		{
			new = new_node(n);
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
	}
	return (NULL);
}
