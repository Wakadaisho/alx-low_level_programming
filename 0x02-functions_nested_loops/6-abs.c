#include "main.h"

/**
 * _abs - returns the absolute value of a number
 * @n: integer that's either negative, positive or zero
 *
 * Return:	if n => 0  -    n
 *		else	   -    -n
 */
int _abs(int n)
{
	return (n < 0 ? -n : n);
}

