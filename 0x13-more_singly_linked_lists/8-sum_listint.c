#include "lists.h"
/**
 * sum_listint - lists sum of linked list
 * @head: head of linked list
 * Return: value of sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
