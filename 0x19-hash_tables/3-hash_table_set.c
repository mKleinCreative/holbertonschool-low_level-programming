#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * create_node - creates a new node for the hash table and frees if fails
 * @pointer: where to store the new node
 * @free_me1: first variable to free if node creation doesn't work
 * @free_me2: second variable to free if node creation doesn't work
 * Return: pointer to new node
 */

hash_node_t *create_node(hash_node_t *pointer, char *free_me1, char *free_me2)
{
	pointer = malloc(sizeof(hash_node_t));
	if (!pointer)
	{
		free(free_me1);
		free(free_me2);
		return (0);
	}
	pointer->key = free_me1;
	pointer->value = free_me2;
	pointer->next = NULL;
	return (pointer);
}

/**
 * hash_table_set - creates a key value pair in a hash table
 * @ht: hash table to store information
 * @key: key to place information with
 * @value: value to store in a node in hash table
 * Return: 1 for success 0 for failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_pos = 0;
	char *key_dup = NULL, *val_dup = NULL;
	hash_node_t *empty_node = NULL, *collision_node = NULL;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);
	if (!strlen(key))
		return (0);
	val_dup = strdup(value);
	key_dup = strdup(key);
	if (!val_dup || !key_dup)
	{
		free(val_dup);
		free(key_dup);
		return (0);
	}
	empty_node = create_node(empty_node, key_dup, val_dup);
	key_pos = key_index((unsigned char *)key, ht->size);
	if ((ht->array)[key_pos] != NULL)
	{
		collision_node = (ht->array)[key_pos];
		while (collision_node)
		{
			if (strcmp(collision_node->key, key_dup) == 0)
			{
				free(ht->array[key_pos]->value);
				ht->array[key_pos]->value = val_dup;
				free(key_dup);
				free(empty_node);
				return (1);
			}
			collision_node = collision_node->next;
		}
		collision_node = ht->array[key_pos];
		empty_node->next = collision_node;
		(ht->array)[key_pos] = empty_node;
	} else
		(ht->array)[key_pos] = empty_node;
	return (1);
}

