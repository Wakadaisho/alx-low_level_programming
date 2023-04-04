#include "lists.h"
#include <stdlib.h>

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
	listint_t *p, *new, *prev = NULL;

	if (head == NULL)
		return (NULL);

	p = *head;
	prev = *head;

	while (i++ < idx)
	{
		prev = p;
		p = p->next;
		if (!p)
			return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->next = p;
	new->n = n;
	if (p == NULL && idx == 0)
	{
		*head = new;
	}
	else if (p == NULL && idx != 0)
	{
		free(new);
		return (NULL);
	}
	else
	{
		prev->next = new;
	}
	return (new);
}
