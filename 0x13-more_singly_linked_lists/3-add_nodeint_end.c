#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node to the end of a listint_t list
 *
 * @head: beginning of list;
 * @n: list to be count elements
 *
 * Return:	address of the new element
 *		NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p_list = *head;
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	while (p_list && p_list->next)
	{
		p_list = p_list->next;
	}

	new->n = n;
	new->next = NULL;

	if (p_list)
	{
		p_list->next = new;
	}
	else
	{
		*head = new;
	}

	return (new);
}
