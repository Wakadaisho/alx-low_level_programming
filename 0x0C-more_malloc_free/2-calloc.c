#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - allocates memory using malloc
 *		initializing each location with 0
 *		till size nmemb
 *
 * @nmemb : number of items in the new array
 * @size : size in bytes of each item
 *
 * Return:	Pointer to new memory
 *		NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem, *p;
	unsigned int i = 0, bytes = nmemb * size;

	if (bytes == 0)
		return (NULL);

	p = mem = malloc(bytes);

	if (mem == NULL)
		return (NULL);

	while (i < bytes)
	{
		*(p + i) = 0;
		i++;
	}

	return (mem);
}
