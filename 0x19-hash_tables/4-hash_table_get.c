#include "hash_tables.h"

/**
 * hash_table_get - gets the value for the given key
 * @ht: hash table to search
 * @key: key to lookup
 * Return: value stored at the key
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int i;
	hash_node_t *bucket_head;

	if (ht == NULL || ht->size == 0)
		return (NULL);
	i = key_index((unsigned char *)key, ht->size);
	bucket_head = ht->array[i];
	for (bucket_head = ht->array[i]; bucket_head != NULL; bucket_head = bucket_head->next)
	{
		if (strcmp(bucket_head->key, key) == 0)
			return (bucket_head->value);
	}
	return (NULL);
}

