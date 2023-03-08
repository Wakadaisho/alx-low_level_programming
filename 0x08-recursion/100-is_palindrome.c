#include "main.h"

/**
* _test_palindrome - test whether a string is a palindrome
* @s: start of string
* @t: last character in string (just before \0)
*
* Return:	0 if not a palindrome
*		1 if palindrome
*/
int _test_palindrome(char *s, char *t)
{
	if (*s != *t)
		return (0);
	/* the pointers are in the same position or swapped*/
	if (s >= t)
		return (1);

	return (_test_palindrome(s + 1, t - 1));
}

/**
* is_palindrome - finds whether a string is a palindrome
* @s: the string
*
* Return: integer, 1 if palindrome, 0 otherwise
*/
int is_palindrome(char *s)
{
	char *t = s;

	while (*t)
		t++;
	t--;	/* one before \0 */

	return (_test_palindrome(s, t));
}
