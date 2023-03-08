#include "main.h"

/**
 * traversewild - how many steps to advance string
 *			to the first non '*' character
 * @s: string to advance
 *
 * Return:	pointer to first non '*' character
 *		'\0' if not found (end of string)
 */
char *traversewild(char *s)
{
	if (*s == '\0' || *s != '*')
		return (s);
	return (traversewild(s + 1));
}

/**
 * traversesubject - advance a string till the last
 *			occurence of a character is reached
 * @s: string to advance
 * @c: character to find
 * @step: current index being checked
 * @last_occurence: index of the last found match
 *
 * Return:	steps to take to last char occurence c
 *		'-1' if not found (end of string)
 */
int traversesubject(char c, char *s, int step, int last_occurence)
{
	if (*s == '\0')
		return (last_occurence);
	if (*s == c)
		last_occurence = step;
	return (traversesubject(c, s + 1, step + 1, last_occurence));
}

/**
 * wildcmp - test whether two strings are equal, now with a wildcard character
 * @s1: string
 * @s2: string (can contain special '*' wildcard character)
 *
 * Return:	1 if strings can be considered identical
 *		0 otherwise
 *
 */
int wildcmp(char *s1, char *s2)
{
	int traversed = 0;
	int last_occurence = -1;

	/* if s2 is '*', go to next non str char s1 in s2 */
	if (*s2 == '*')
	{
		traversed = 1;
		s2 = traversewild(s2);
	}

	/* if both strings are at the end, they are similar */
	if (*s2 == '\0' && *s1 == '\0')
		return (1);

	/* only move s1 if s2 moved across '*'s */
	if (traversed)
	{
		/* find the most optimistic (greedy) match on s1*/
		last_occurence = traversesubject(*s2, s1, 0, -1);

		/**
		 * if not found match but both strings end, similar
		 * accounts for 'empty' wildcards (e.g. *, ***)
		 */
		if (last_occurence == -1 && *s2 == '\0')
			return (1);

		/* last occurence found */
		if (last_occurence != -1)
			s1 = s1 + last_occurence;
	}

	/* traversed both strings, still disimilar*/
	if (*s2 != *s1)
		return (0);

	return (wildcmp(s1 + 1, s2 + 1));
}
