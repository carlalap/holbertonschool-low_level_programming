#include "lists.h"

/**
 * pop_listint - pops a node out
 * @head: linked list address
 * Return: head node data
 */

int pop_listint(listint_t **head)

{
	int data;
	listint_t *next;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	next = (*head)->next;
	free(*head);
	*head = next;

	return (data);
}
