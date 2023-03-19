#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 * Return:  count of elements in listint_t list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
