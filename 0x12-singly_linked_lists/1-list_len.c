#include "lists.h"
/**
 * list_len -function that returns the number of elements in a linked list
 * @h: pointer type struct list_t
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t aux = 0;
	const list_t *tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		aux++;
	}
	return (aux);
}

