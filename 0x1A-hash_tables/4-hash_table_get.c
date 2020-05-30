#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: is the hash table you want to add or update the key/value
 * @key: the key
 * Return: the value associated with the element, or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *new_node = NULL;
	unsigned long int index = 0;

	if (ht == NULL || (ht->array) == NULL || key == NULL || key[0] == '\0')
		return (NULL);
	index = key_index((unsigned char *)key, ht->size);
	new_node = ht->array[index];

	while (new_node != NULL)
	{
		if (strcmp(new_node->key, key) == 0)
			return (new_node->value);
		new_node = new_node->next;
	}
	return (NULL);
}
