#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * _string_all_digits - checks whether a string is made of digits
 *
 * @s: string to check
 * @i: index being checked
 *
 * Return:	non-zero if all characters are digits
 *		0 if any character is not a digit
 */
int _string_all_digits(char *s, int i)
{
	if (*s == '\0')
		return (1);

	/* account for negative numbers */
	if (i == 0 && *s == '-')
		return (_string_all_digits(++s, ++i));

	if (!isdigit(*s))
		return (0);

	return (_string_all_digits(++s, ++i));
}

/**
 * main - mutliplies two positive numbers
 *
 * @argc : the old pointed memory
 * @argv : the previous allocated bytes
 *
 * Return:	multiple of two numbers
 *		Error on invalid numbers
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!(_string_all_digits(argv[1], 0)
		&&
		_string_all_digits(argv[2], 0))
	)
	{
		printf("Error\n");
		return (98);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
