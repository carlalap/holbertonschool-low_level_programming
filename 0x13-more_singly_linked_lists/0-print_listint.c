#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * print_listint - prints integers in list
 * @h: struct listint_t type
 * Return: print all elements
 */

size_t print_listint(const listint_t *h)

{
	size_t count;

	
	for (count = 0; h != NULL; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
