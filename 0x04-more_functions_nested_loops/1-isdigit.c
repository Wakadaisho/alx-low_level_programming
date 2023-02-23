#include "main.h"

/**
 * _isdigit - checks for a digit character
 * @c: ASCII character as an int
 *
 * Description: uses ASCII values to determine if a character is a digit
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c <= 57 && c >= 48 ? 1 : 0);
}
