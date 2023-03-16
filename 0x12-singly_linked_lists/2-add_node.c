#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node
 * @head: head address i think
 * @str: string to put through
 * Return: returns an address of new node
 */


list_t *add_node(list_t **head, const char *str)

{
	list_t *newnode;
	int i = 0;


	while (str[i])
		i++;

	if (!head || !str)
		return (NULL);

	newnode = malloc(sizeof(list_t));

	if (!newnode)
		return (NULL);

	newnode->str = strdup(str);
	newnode->len = i;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}





