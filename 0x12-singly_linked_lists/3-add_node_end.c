#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - add a new node to the end of a list_t list
 *
 * @head - beginning of list;
 * @str - list to be count elements
 *
 * Return:	address of the new element
 *		NULL on failure
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p_list = *head;
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (p_list && p_list->next)
	{
		p_list = p_list->next;
	}

	new->str = strdup(str);
	new->len = strlen(new->str);
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
