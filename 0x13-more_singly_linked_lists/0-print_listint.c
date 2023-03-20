#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all elements of a listint_t list.
 * @h: pointer to the head of a list.
 *
 * Return:  Number of elements in a list.
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
