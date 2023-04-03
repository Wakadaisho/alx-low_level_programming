#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_listint - reverses a list
 *
 * @head: beginning of list
 *
 * Return:	listint_t address
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next, *prev;

	if (head == NULL)
		return (NULL);

	next = *head;
	prev = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}
