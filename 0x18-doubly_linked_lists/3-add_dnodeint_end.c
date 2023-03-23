#include "lists.h"

/**
 * add_dnodeint_end - Adds a node to the end  of a dlistint_t dlinked list
 * @head: The head of the doubly linked list
 * @n: The value to store inside the node
 * Return: The address of the newly created node, NULL if failed
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)

{
	dlistint_t *newnode, *temp;

	temp = *head;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->next = NULL;
	newnode->prev = NULL;
	newnode->n = n;

	if (*head == NULL)
	{
		(*head) = newnode;
			return (newnode);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	newnode->prev = temp;
	temp->next = newnode;
	return (newnode);
}
