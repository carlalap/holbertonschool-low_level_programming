#include "lists.h"

/**
 * print_dlistint_backward - Prints dlistint list in reverse
 * @h: The head of the dlistint doubly linked list
 * Return: The number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
size_t count = 0;

	if (h == NULL)
		return (count);

	while (h->next != NULL)
		h = h->next;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->prev;
		count++;
	}
	return (count);
}


