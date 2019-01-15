#include "hash_tables.h"

/**
 * key_index - returns the index of a key
 * @key: key to find and return
 * @size size of the array of the hash table
 * Return: (Success)
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (size)
		return (hash_djb2(key) % size);
	return (0);
}

