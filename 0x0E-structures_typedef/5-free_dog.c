#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - initialize a variable of type struct dog
 *
 * @d: the struct to initialize
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	free(d);
}
