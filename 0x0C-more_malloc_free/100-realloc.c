#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _realloc - reallocates memory using malloc and free
 *
 * @ptr : the old pointed memory
 * @old_size : the previous allocated bytes
 * @new_size: number of bytes in the new memory
 *
 * Return:	Pointer to new memory
 *		NULL on failure
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem, *p = ptr;
	unsigned int i = 0;

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		return (mem);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	mem = malloc(new_size);

	if (mem == NULL)
	{
		return (NULL);
	}

	while (i < old_size)
	{
		*(mem + i) = *(p + i);
		i++;
	}

	free(ptr);

	return (mem);
}
