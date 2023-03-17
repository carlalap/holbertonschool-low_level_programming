#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * free_listint - free the list
 * @head: address of the start of linked list
 * Return: nothing
 */


void free_listint(listint_t *head)
{
	listint_t *temp = head;
	listint_t *next;


	while (temp != NULL)
	{
		next = temp->next;
		free(temp);
		temp = next;
	}
	head = NULL;
}

