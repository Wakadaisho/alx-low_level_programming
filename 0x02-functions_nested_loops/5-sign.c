#include "main.h"

/**
 * print_sign - checks for the sign of a number
 * @n: integer that's either negative, positive or zero
 *
 * Description:	if n > 0  -   print +
 *		if n == 0 -   print 0
 *		if n > 0  -   print -
 *
 * Return:	if n > 0  -   1
 *		if n == 0 -   0
 *		if n > 0  -  -1
 */
int print_sign(int n)
{
	int retvalue;

	if (n > 0)
	{
		_putchar('+');
		retvalue = 1;
	}
	else if (n < 0)
	{
		_putchar('-');
		retvalue = -1;
	}
	else
	{
		_putchar('0');
		retvalue = 0;
	}

	return (retvalue);
}
