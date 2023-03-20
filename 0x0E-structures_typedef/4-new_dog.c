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
 * new_dog - initialize a variable of type struct dog
 *
 * @name: the name of the dog as a string
 * @age: the age of the dog as a float
 * @owner: the owner of the dog as a string
 *
 * Return: pointer to struct dog (typedef dog_t)
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_size = sizeof(name), owner_size = sizeof(owner);
	dog_t *p_dog;
	char *this_owner, *p_owner, *this_name, *p_name;

	this_name = p_name = malloc(name_size);
	if (p_name == NULL)
		return (NULL);

	this_owner = p_owner = malloc(owner_size);
	if (p_owner == NULL)
	{
		free(p_name);
		return (NULL);
	}

	p_dog = malloc(name_size + sizeof(age) + owner_size);

	if (p_dog == NULL)
	{
		free(p_name);
		free(p_owner);
		return (NULL);
	}

	_strcpy(this_name, name);
	_strcpy(this_owner, owner);

	p_dog->name = this_name;
	p_dog->age = age;
	p_dog->owner = this_owner;

	return (p_dog);
}
