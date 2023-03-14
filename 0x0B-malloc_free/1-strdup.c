#include "main.h"
#include <stdlib.h>

/**
 * _strdup - copies a string to a new area of memory
 *
 * @str: string to copy
 *
 * Return:	fail - NULL if malloc fails or str is NULL
 *		success - pointer to new string
 */
char *_strdup(char *str)
{
	char *p, *new_str = NULL;

	if (str == NULL)
	{
		return (NULL);
	}

	new_str = malloc(_str_length(str) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	p = new_str;

	while (*str)
	{
		*p = *str;
		str++;
		p++;
	}

	*p = '\0';

	return (new_str);
}

/**
 * _str_length - return the length of a string
 * @s: string to find length of
 *
 * Return: length of string
 */
int _str_length(char *s)
{
	int len = 0;

	if (s == NULL)
	{
		return (0);
	}

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
