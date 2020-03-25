#include "lists.h"
/**
 * listint_len - unction that returns the number of elements in a linked
 * listint_t
 * @h: variable type struct
 * Return: the number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp;
	listint_t *new_nod = malloc(sizeof(listint_t));

	if (new_nod == NULL)
		return (0);

	tmp = *head;

	new_nod->n = n;
	new_nod->next = 0;

	if (tmp == 0)
		*head = new_nod;
	else
	{
		while (tmp->next != 0)
			tmp = tmp->next;
		tmp->next = new_nod;
	}
	return (new_nod);
}
