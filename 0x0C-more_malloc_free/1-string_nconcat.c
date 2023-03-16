#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 *			and up to n of s2
 *
 * @s1 : the first string
 * @s2 : the second string
 * @n: number of characters to copy from the second string
 *
 * Return:	Pointer to new memory
 *		NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str, *p;
	unsigned int i, len_s1, len_s2;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len_s1 = strlen(s1);
	len_s2 = strlen(s2);

	if (len_s2 > n)
		len_s2 = n;

	p = str = malloc(len_s1 + len_s2 + 1);

	if (str == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++, p++)
		*p = s1[i];

	for (i = 0; i < len_s2; i++, p++)
		*p = s2[i];

	*p = '\0';

	return (str);
}
