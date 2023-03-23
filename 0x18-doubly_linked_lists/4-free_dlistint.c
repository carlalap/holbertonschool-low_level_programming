#include "lists.h"

/**
 * free_dlistint - Frees the double  dlistint_t dlinked list from memory
 * @head: The head of the doubly linked list
 */


void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	temp = head;

	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}
