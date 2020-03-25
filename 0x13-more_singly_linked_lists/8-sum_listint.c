#include "lists.h"
/**
 * sum_listint - function that returns the sum of all the data (n) of a
 * listint_t linked list
 * @head: head pointer of singly linked list
 * Return: if the list is empty, return 0
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == 0)
		return (0);

	while (head != 0)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
