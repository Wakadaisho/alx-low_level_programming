#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a node with data at a certain index
 *
 * @head: beginning of list
 * @idx: index to insert data
 * @n: integer to insert
 *
 * Return:	listint_t address
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *p, *new, *prev;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		if (*head)
			new->next = *head;
		*head = new;
		return (new);
	}

	for (p = *head; i < idx && p; i++, p = p->next)
		prev = p;

	if (!p && i != idx)
	{
		free(new);
		return (NULL);
	}

	new->next = p;
	prev->next = new;

	return (new);
}
