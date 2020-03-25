#include "lists.h"
/**
 * pop_listint - function that deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n)
 * @head: pointer to head of singly linked list
 * Return: if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *aux = *head;
	listint_t *aux2;
	int n;

	if (head == NULL || aux == NULL)
		return (0);

	aux2 = aux->next;
	n = aux->n;
	free(aux);
	*head = aux2;
	return (n);
}
