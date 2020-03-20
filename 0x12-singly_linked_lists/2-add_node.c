#include "lists.h"
/**
 * add_node -function that adds a new node at the beginning of a list
 * @head: pointer of type struct list_t
 * @str:elemnt of list
 * Return:the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int size, i = 0;
	char *aux_str = NULL;
	list_t *new_node;

	aux_str = malloc(sizeof(list_t));
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (; str[size]; size++)
	{}
	aux_str = malloc(sizeof(char) * size + 1);
	if (aux_str == NULL)
		return (NULL);
	for (; str[i]; i++)
	{
		aux_str[i] = str[i];
	}
		if (str == 0)
	{
		new_node->str = 0;
		new_node->len = 0;
	}
	else
	{
		if (aux_str == 0)
		{
			free(new_node);
			return (0);
		}
		new_node->str = aux_str;
		new_node->len = i;
	}
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
