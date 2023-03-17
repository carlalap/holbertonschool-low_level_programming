#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * free_listint2 - free the list
 * @head: address of the start of linked list
 * Return: nothing
 */


void free_listint2(listint_t **head)

{
	listint_t *temp;
	listint_t *next;

	if (head == NULL)
		return;


	temp = *head;

	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	*head = NULL;
}

