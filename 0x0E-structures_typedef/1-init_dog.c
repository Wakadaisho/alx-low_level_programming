#include "dog.h"

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
	d->name = name;
	d->age = age;
	d->owner = owner;
}
