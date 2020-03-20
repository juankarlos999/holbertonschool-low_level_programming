#include "lists.h"
/**
 * print_list -function that prints all the elements of a list
 *@h: pointer char
 *Return: Elements of list
 */
size_t print_list(const list_t *h)
{
	int i;
	const list_t *tmp = h;

	i = 0;
	while (tmp != NULL)
	{
		if (tmp->str == NULL)
			printf("[0] %p\n", tmp->str);

		else
			printf("[%d] %s\n", tmp->len, tmp->str);
			tmp = tmp->next;
			i++;
	}
	return (i);
}
