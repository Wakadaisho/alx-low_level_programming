#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * array_range - creates an array of integers
 *		from min to max inclusive
 *
 * @min : the first integer
 * @max : the last integer
 *
 * Return:	Pointer to new memory of integers
 *		NULL on failure
 */
int *array_range(int min, int max)
{
	int *mem, *p;
	int i = min, bytes = sizeof(int) * ((max - min) + 1);

	if (bytes <= 0)
		return (NULL);

	p = mem = malloc(bytes);

	if (mem == NULL)
		return (NULL);

	while (i <= max)
	{
		*p = i;
		p++;
		i++;
	}

	return (mem);
}
