#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - sums all the data in a linked list
 * @head: pointer to the head of the list
 * Return: sum of all the data in the list.
 */

int sum_listint(listint_t *head)
{
	listint_t *temp;
	unsigned int sum, i;

	temp = head;
	if (!temp)
		return (0);
	sum = 0;
	for (i = 0; temp != '\0'; i++)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
