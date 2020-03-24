#include "lists.h"
/**
 * listint_len - unction that returns the number of elements in a linked
 * listint_t
 * @h: variable type struct
 * Return: the number of nodes
  */
size_t listint_len(const listint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
