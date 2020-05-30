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
	char *copy_key = NULL, *copy_value = NULL;
	hash_node_t *new_node = NULL, *aux_node = NULL;
	unsigned long int index;

	if (ht == NULL || (ht->array) == NULL || key == NULL || key[0] == '\0')
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	new_node = ht->array[index];

	copy_value = strdup(value);
	if (copy_value == NULL)
		return (0);

	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) != 0)
		{
			free(new_node->value), new_node->value = copy_value;
			return (1);
		}
		new_node = new_node->next;
	}
	new_node = ht->array[index];
	aux_node = malloc(sizeof(hash_node_t));
	if (aux_node == NULL)
	{
		free(copy_value);
		return (0);
	}

	copy_key = strdup(key);
	if (copy_value == NULL)
	{
		free(copy_value), free(aux_node);
		return (0);
	}

	aux_node->key = copy_key, aux_node->value = copy_value;
	aux_node->next = new_node, ht->array[index] = aux_node;
	return (1);
}
