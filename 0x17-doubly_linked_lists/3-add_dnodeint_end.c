#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t list
 * @head: doubly linked list to add to
 * @n: data to add to node
 * Return: the new node address, NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	dlistint_t *h = *head;

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	while (h && h->next)
		h = h->next;
	if (h)
	{
		h->next = new_node;
		new_node->prev = h;
	}
	else
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	return (new_node);
}
