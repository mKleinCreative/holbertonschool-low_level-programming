#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * and returns the nodes data
 * @head: pointer to the head of the list
 * Return: data of the head of the list.
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int node_data;

	if (!*head)
		return (0);
	tmp = *head;
	if (!tmp && tmp->next == NULL)
		return (0);
	node_data = tmp->n;
	**head = *tmp->next;
	return (node_data);
}
