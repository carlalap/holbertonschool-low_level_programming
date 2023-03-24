#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at n index from head
 * @head: The head of the dlistint_t doubly linked list
 * @index: The position of the node that is to be deleted
 * Return: 1 if deletion was successful, -1 if failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
	dlistint_t *temp = *head;

	if (*head == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (temp == NULL)
			return (-1);

		temp = temp->next;
	}

	if (temp == *head)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		temp->prev->next = temp->next;

		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
