#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at end
 * @head: head address i think
 * @str: string to put through
 * Return: returns an address of new node
 */


list_t *add_node_end(list_t **head, const char *str)

{
	list_t *new, *last;
	int i = 0;

	while (str[i])
		i++;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (strdup(str) == NULL)
	{
		free(new);
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
		return (new);
	}
}
