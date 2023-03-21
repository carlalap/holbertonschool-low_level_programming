#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list.
 * @h: pointer to the head of a list.
 * Return:  Number of elements in a list.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;
	const listint_t *newnode = h;


	for (; newnode; newnode = newnode->next)
	{
		printf("%d\n", newnode->n);
		i++;
	}
	return (i);
}
