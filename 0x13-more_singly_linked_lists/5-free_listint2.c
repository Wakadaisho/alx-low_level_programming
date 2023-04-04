#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list, setting head to NULL
 *
 * @head: beginning of list;
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head == NULL)
		return;

	p = *head;

	while (p)
	{
		p = (*head)->next;
		free(*head);
		*head = p;
	}

	*head = NULL;
}
