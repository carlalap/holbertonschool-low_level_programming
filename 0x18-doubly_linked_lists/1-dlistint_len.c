#include "lists.h"

/**
 * dlistint_len - Gets the number of nodes in a dlistint_t dlinked list
 * @h: head of double linked list
 * Return: the number of nodes of the list
 */

size_t dlistint_len(const dlistint_t *h)

{
	const dlistint_t *tmp;
	int count = 0;

	tmp = h;

	while (tmp != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
