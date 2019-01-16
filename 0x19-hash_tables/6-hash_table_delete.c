#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: head of hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *del_me, *del_me_next;
	unsigned long int index;

	if (!ht)
		return;
	for (index = 0; index < ht->size; index++)
	{
		del_me = ht->array[index];
		while(del_me)
		{
			del_me_next = del_me->next;
			free(del_me->key);
			free(del_me->value);
			free(del_me);
			del_me = del_me_next;
		}
	}
	free(ht->array);
	free(ht);
}

