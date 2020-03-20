#include "lists.h"
/**
 * add_node -function that adds a new node at the beginning of a list
 * @head: pointer of type struct list_t
 * @str:elemnt of list
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	char *aux_str = NULL;
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (; str[i]; i++)
	{
		aux_str[i] = str[i];
	}
	new_node->str = aux_str;
	new_node->len = i;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
