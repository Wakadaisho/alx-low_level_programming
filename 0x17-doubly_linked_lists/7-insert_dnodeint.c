#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at an index
 * @h: doubly linked list
 * @idx: index to insert node at
 * @n: data to insert
 * Return: new node address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_node = NULL, *head = *h;

	for (; head && i < idx; i++)
		head = head->next;

	if (i != idx)
		return (NULL);

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
		return (new_node);
	}
	if (head == NULL)
	{
		new_node = add_dnodeint_end(h, n);
		return (new_node);
	}
	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = head;
	new_node->prev = head->prev;
	head->prev->next = new_node;
	head->prev = new_node;
	return (new_node);
}


