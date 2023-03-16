#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * list_len - number of elements in a linked list_t
 * @h: header node
 * Return: number of elements{
 */

size_t list_len(const list_t *h)

{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}

