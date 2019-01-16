#include "hash_tables.h"

/**
 * hash_table_print - prints the content of given hash table
 * @ht: the given hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *pointer = NULL;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	while (index < ht->size)
	{
		pointer = ht->array[index];
		while (pointer)
		{
			printf("'%s': '%s'", pointer->key, pointer->value);
			if (pointer->next)
				printf(", ");
			pointer = pointer->next;
		}
		while (!(ht->array[index + 1]))
			index++;
		if (flag && index < ht->size)
			printf(", ");
		else
			flag = 1;
		index++;
	}
	printf("}\n");
}

