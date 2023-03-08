#include "main.h"

/**
* _pow_recursion - finds the exponent of a number
* @x: the base
* @y: the exponent
*
* Return: integer, exponent of a number
*/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	return (x * _pow_recursion(x, y - 1));
}
