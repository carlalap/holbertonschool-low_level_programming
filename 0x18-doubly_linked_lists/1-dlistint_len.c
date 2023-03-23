#include "lists.h"

/**
 * dlistint_lens - Print the numbers of elements
 * @h: head of list
 * Return: the number of elements of the list
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
