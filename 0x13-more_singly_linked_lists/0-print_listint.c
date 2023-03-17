#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * print_listint - prints integers in list
 * @h: struct listint_t type
 * Return: print all elements
 */

size_t print_listint(const listint_t *h)

{
	siize_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
