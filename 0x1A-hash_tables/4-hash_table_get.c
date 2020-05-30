#include "hash_tables.h"
#include <string.h>
/**
 * */
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
