#include "dog.h"
#include <stdlib.h>

/**
 * _strcpy - copy a string
 *
 * @dest: destination of copy
 * @src: source string
 *
 * Return: void
 */
void _strcpy(char *dest, char *src)
{
	if (dest == NULL || src == NULL)
		return;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
}

/**
 * init_dog - initialize a variable of type struct dog
 *
 * @d: the struct to initialize
 * @name: the name of the dog as a string
 * @age: the age of the dog as a float
 * @owner: the owner of the dog as a string
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	char *p_name = NULL, *p_owner = NULL;

	if (name != NULL)
		p_name = malloc(sizeof(name));

	if (owner != NULL)
		p_owner = malloc(sizeof(owner));

	_strcpy(p_name, name);
	_strcpy(p_owner, owner);

	d->name = p_name;
	d->age = age;
	d->owner = p_owner;
}
