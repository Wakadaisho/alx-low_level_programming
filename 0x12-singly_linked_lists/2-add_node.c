#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add a new node to the beginning of a list_t list
 *
 * @head: beginning of list;
 * @str: list to be count elements
 *
 * Return:	address of the new element
 *		NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(new->str);
	new->next = *head;

	*head = new;

	return (new);
}
