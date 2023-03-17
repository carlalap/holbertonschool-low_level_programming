#include "lists.h"

/**
 * pop_listint - pops a node out
 * @head: linked list address
 * Return: head node data
 */

int pop_listint(listint_t **head)

{

	int data = 0;
	listint_t *temp;

	if (*head == NULL)
		return (data);

	temp = *head;
	data = temp->n;
	
	free(*head);
	
	*head = temp->next;

	return (data);
}
