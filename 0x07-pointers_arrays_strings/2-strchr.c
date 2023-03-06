#include "main.h"

/**
* _strchr - locates a character in a string
* @s: string to search
* @c: character to find
*
* Return: pointer to string location, NULL if not found
*/
char *_strchr(char *s, char c)
{
	char *p = s;

	while (*p)
	{
		if (*p == c)
		{
			return (p);
		}
		p++;
	}

	return (p);
}
