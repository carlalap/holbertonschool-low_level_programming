#include "lists.h"
#include <stdio.h>

/*
 * print_listint - prints all elements of a listint_t list.
 * @h: A pointer to the head of the list_t list.
 *
 * Return:  count of elements in listint_t list.
 */

size_t print_listint(const listint_t *h)
{
	int count;
	const listint_t *temp = h;

	for (count = 0; temp != NULL; count++)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
	return (count);
}
