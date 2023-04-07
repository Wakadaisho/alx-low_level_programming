#include "main.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 *
 * @b: string of, ideally, only '0' or '1' chars
 *
 * Return:	base 10 representation of binary value
 *		Fail: 0 if b is NULL or contains non '0' or '1' char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int value = 0;
	const char *p = b;

	while (p && *p)
	{
		if (*p != '1' && *p != '0')
			return (0);

		value <<= 1;
		value += *p++ == '1';
	}

	return (value);
}
