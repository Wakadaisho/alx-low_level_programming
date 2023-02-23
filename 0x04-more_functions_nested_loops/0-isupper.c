#include "main.h"

/**
 * _isupper - checks for a uppercase character
 * @c: ASCII character as an int
 *
 * Description: uses ASCII values to determine the character case
 *
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	return (c <= 90 && c >= 65 ? 1 : 0);
}
