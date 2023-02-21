#include "main.h"

/**
 * _islower - checks for a lowercase character
 * @c: ASCII character as an int
 *
 * Description: uses ASCII values to determine the character case
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	return (c <= 122 && c >= 97 ? 1 : 0);
}
