#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: is the hash table you want to add or update the key/value
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	int aux = 0;
	unsigned long int i;

	if (ht == NULL || (ht->array) == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			if (aux > 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
			aux = 1;
		}
	}
	printf("}\n");
}
