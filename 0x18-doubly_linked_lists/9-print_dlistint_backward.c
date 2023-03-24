#include "lists.h"

/**
 * print_dlistint_backward - Prints dlistint list in reverse
 * @h: The head of the dlistint doubly linked list
 * Return: The number of nodes
 */

size_t print_dlistint_backward(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *this_node = NULL;
	dlistint_t *last_node = NULL;

	this_node = (dlistint_t *) h;
	while (this_node)
	{
		count++;
		last_node = this_node;
		this_node = this_node->next;
	}

	this_node = last_node;
	while (this_node)
	{
		printf("%d\n", this_node->n);
		this_node = this_node->prev;
	}
	return (count);
}
