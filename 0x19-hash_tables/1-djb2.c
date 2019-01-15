#include "hash_tables.h"

/**
 * hash_djb2 - hashing algorithm created by dan bernstein
 * @str: string to hash together into an int
 * Return: Returns a hashed representation of the given string
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}

