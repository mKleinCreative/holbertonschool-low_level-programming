#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - find a loop inside of a linked list.
 * @head: head of the list to check
 * Return: returns the address of end of the loop.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p = head, *fast_p = head;

	while (slow_p && fast_p && fast_p->next )
	{
		slow_p = slow_p->next;
		fast_p  = fast_p->next->next;
		if (slow_p == fast_p)
		{
			printf("d");
			return (1);
		}
	}
	return (0);
}
