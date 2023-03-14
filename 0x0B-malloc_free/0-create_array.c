#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 *			initializing it with a specific
 *			character
 * @size: size of array
 * @c: character to initialize the array with
 *
 * Return:	fail - NULL if malloc fails or size is 0
 *		success - pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr = NULL;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(sizeof(c) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	while (size-- != 0)
	{
		*(arr + size) = c;
	}

	return (arr);
}
