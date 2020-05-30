#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: is the hash table you want to add or update the key/value
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *aux;
	unsigned long int i = 0;

	if (ht == NULL || (ht->array) == NULL)
		return;

	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			aux = node->next;
			free(node->key), free(node->value), free(node);
			node = aux;
		}
	}
	free(ht->array), free(ht);
}
