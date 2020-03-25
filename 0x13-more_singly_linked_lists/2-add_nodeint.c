#include "lists.h"
/**
 * add_nodeint - Function that adds a new node at the beginning of a listint_t
 * @head: Node head
 * @n: Variable type struct
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_nod = malloc(sizeof(listint_t));

	if (new_nod == NULL)
		return (0);

	new_nod->n = n;
	new_nod->next = *head;
	*head = new_nod;
	return (new_nod);
}
