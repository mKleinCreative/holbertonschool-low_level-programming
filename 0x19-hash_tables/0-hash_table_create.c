#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table of the given size.
 * @size: size of the hash table array
 * Return: a pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (!size)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	(new)->size = size;
	(*new).array = malloc(size * sizeof(unsigned long int));
	if (!(*new).array)
	{
		free(new);
		return (NULL);
	}
	return (new);
}

