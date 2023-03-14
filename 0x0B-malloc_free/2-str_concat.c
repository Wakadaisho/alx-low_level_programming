#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return:	fail - NULL if malloc fails
 *		success - pointer to new string
 */
char *str_concat(char *s1, char *s2)
{
	char *p, *new_str = NULL;

	new_str = malloc(_str_length(s1) + _str_length(s2) + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	p = new_str;

	while (s1 && *s1)
	{
		*p = *s1;
		p++;
		s1++;
	}

	while (s2 && *s2)
	{
		*p = *s2;
		p++;
		s2++;
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
