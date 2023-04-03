#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add a new node to the beginning of a listint_t list
 *
 * @head: beginning of list;
 * @n: list to be count elements
 *
 * Return:	address of the new element
 *		NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
