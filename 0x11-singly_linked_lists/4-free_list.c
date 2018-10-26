#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - frees up a node in a linked list
 * @head: head of the linked list 
 */

void free_list(list_t *head)
{
	list_t *free_node;

	while (head)
	{
		free_node = head;
		head = head->next;
		free(free_node->str);
		free(free_node);
	}
}
