#include "main.h"

/**
* _strcmp - compares two strings
* @s1: the first string
* @s2: the second string
*
* Return:	< 0 if s1 < s2
*		> 0 if s1 > s2
*		0 otherwise
*/
int _strcmp(char *s1, char *s2)
{
	int delta = 0;

	while (*s1 && *s2 && delta == 0)
	{
		delta = *s1 - *s2;
		s1++;
		s2++;
	}

	return (delta);
}
