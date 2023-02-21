#include "main.h"

/**
 * _isalpha - checks for an alphabet character
 * @c: ASCII character as an int
 *
 * Description: uses ASCII values to determine
 *		if the character is within a-z (upper and lowercase)
 *
 * Return: 1 if c is lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
	return (c <= 122 && c >= 65 ? 1 : 0);
}
