#include "main.h"

/**
* _strspn - finds initial length of string
*		that matches certain characters
* @s: string to search
* @accept: characters to match
*
* Return: unsigned integer, length of matching string
*/
unsigned int _strspn(char *s, char *accept)
{
	char *s_p = s;
	char *a_p;
	unsigned int match;
	unsigned int len = 0;

	do {
		a_p = accept;
		match = 0;

		while (*a_p && match != 1)
		{
			match = *a_p == *s_p;
			a_p++;
		}

		s_p++;
		len += match;
	} while (*s_p && match);

	return (len);
}
