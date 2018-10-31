#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - reverses a LL
 * @head: pointer to the head of the list
 * Return: Reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;
	unsigned int i;

	next = prev = NULL;
	if (!*head)
		return (0);
	for (i = 0; *head != '\0'; i++)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = (*head);
		(*head) = next;
	}
	*head = prev;
	return (*head);
}
