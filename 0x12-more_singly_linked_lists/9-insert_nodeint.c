#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a data node at given index into LL
 * @head: pointer to the head of the list
 * @idx: index to insert into
 * @n: data to insert into idx spot in LL
 * Return: address of new node or NULL if failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int i;

	temp = *head;
	if (!temp)
		return (0);
	for (i = 0; temp != '\0'; i++)
	{
		if (i + 1 == idx)
			break;
		temp = temp->next;
	}
	new_node = malloc(sizeof(listint_t));
	if (!new_node)
	{
		free(new_node);
		return (NULL);
	}
	if (i + 1 == idx)
	{
		new_node->n = n;
		new_node->next = temp->next;
		temp->next = new_node;
	}
	return (new_node);
}
