#include "lists.h"

/**
 * add_dnodeint - Adds a node to the beginning of a dlistint_t dlinked list
 * @head: The head of the doubly linked list
 * @n: The number to store inside the node
 * Return: The address of the newly created node, NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)

{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = newnode;
	}
	*head = newnode;
	return (*head);
}
