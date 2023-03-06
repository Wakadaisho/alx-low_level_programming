#include "main.h"

/**
* _strstr - searches a string for a substring
* @haystack: string to search
* @needle: substing to match
*
* Return: pointer to substring location, NULL if not found
*/
char *_strstr(char *haystack, char *needle)
{
	char *h_p = haystack;
	char *match_head;
	char *n_p;

	while (*h_p)
	{
		n_p = needle;
		match_head = h_p;

		while (*n_p)
		{
			if (*n_p == *h_p)
			{
				n_p++;
				h_p++;
			}
			else
			{
				break;
			}
		}

		if (*n_p == '\0')
			return (match_head);

		h_p++;
	}

	return (h_p);
}
