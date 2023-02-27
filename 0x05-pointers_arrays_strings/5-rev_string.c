#include "main.h"

/**
 * rev_string - prints a string in reverse
 * @s: string to print in reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	char *r = s;

	while (*++r)
	{
		continue;
	}

	r--;

	while (s < r)
	{
		*s = *s + *r;
		*r = *s - *r;
		*s = *s - *r;
		s++;
		r--;
	}
}
