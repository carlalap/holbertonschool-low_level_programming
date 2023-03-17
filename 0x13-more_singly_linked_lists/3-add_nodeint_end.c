#include "lists.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>


/**
 * add_nodeint_end - adds node at the end
 * @head: head of node linked list
 * @n: value to put new node at end
 * Return: struct
 */

listint_t *add_nodeint_end(listint_t **head, const int n)

{
	listint_t *newnode, *temp;

	newnode = malloc(sizeof(listint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	else
	{
		temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;

		return (newnode);
	}
}
