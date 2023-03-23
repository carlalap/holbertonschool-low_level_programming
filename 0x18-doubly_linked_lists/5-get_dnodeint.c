#include "lists.h"

/**
 * get_dnodeint_at_index - Function get the nth node of a Dlinked list.
 * @head: The head of the doubly linked list
 * @index: Index of the node, starting from 0
 * Return: returns the nth node of the list, if not return NULL.
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *getnode = NULL;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	getnode = head;

	while (getnode != NULL)
	{
		if (i == index)
		{
			return (getnode);
		}
		getnode = getnode->next;
		i++;
	}
	return (NULL);
}
