#include "lists.h"
/**
 * free_listint2 - frees memory of a list
 * @head: pointer to head of singly linked list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head != 0)
		{
			tmp = *head;
			*head = tmp->next;
			free(tmp);
		}
	}
}
