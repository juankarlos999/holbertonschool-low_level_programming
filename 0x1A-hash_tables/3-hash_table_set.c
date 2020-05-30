#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value
 * @key: the key
 * @value: is the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *copy_key, *copy_value;
	hash_node_t *new_node = NULL, *collnode = NULL;
	unsigned long int index;

	if (ht == NULL || (ht->array) == NULL || key == NULL || key[0] == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new_node = ht->array[index];

	copy_value = strdup(value);
	if (copy_value == NULL)
		return (0);

	copy_key = strdup(key);
	if (copy_key == NULL)
		return (0);

	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) != 0)
		{
			free(new_node->value);
			new_node->value = strdup(value);
			return (1);
		}
		new_node = new_node->next;
	}

	new_node = ht->array[index];

	collnode = malloc(sizeof(hash_node_t));
	if (collnode == NULL)
		return (0);

	collnode->key = copy_key;
	collnode->value = copy_value;
	collnode->next = new_node;
	ht->array[index] = collnode;
	return (1);
}
