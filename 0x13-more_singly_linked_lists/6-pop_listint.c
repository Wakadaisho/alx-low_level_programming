#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head of a node and returns the data
 *
 * @head: beginning of list;
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int pop_val;
	listint_t *p;

	if (head == NULL || *head == NULL)
		return (0);

	p = (*head)->next;
	pop_val = (*head)->n;
	free(*head);
	*head = p;

	return (pop_val);
}
