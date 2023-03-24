#include "lists.h"

/**
 * sum_dlistint - Function sums the data of all nodes.
 * @head: The head of the doubly linked list
 * Return: sum of data of node of the list
 */


int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	unsigned int sum = 0;

	if (head == NULL)
	{
		return (sum);
	}

	while (temp != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}
	return (sum);
}
