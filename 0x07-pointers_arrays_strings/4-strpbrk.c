#include "main.h"

/**
* _strpbrk - searches a string for any set of bytes
*		and returns pointer to first match
* @s: string to search
* @accept: characters to match against
*
* Return: pointer to string location, NULL if not found
*/
char *_strpbrk(char *s, char *accept)
{
	char *s_p = s;
	char *a_p;
	unsigned int match = 0;

	while (*s_p)
	{
		a_p = accept;

		while (*a_p && match != 1)
		{
			match = *a_p == *s_p;
			a_p++;
		}

		if (match)
			return (s_p);
		s_p++;
	}

	return (s_p);
}
