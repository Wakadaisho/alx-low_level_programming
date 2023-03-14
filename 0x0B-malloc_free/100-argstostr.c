#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int _str_length(char *s);

/**
 * argstostr - concatenates args of a program
 *
 * @ac: number of arguments
 * @av: arguments
 *
 * Return:	fail - NULL if malloc fails
 *		success - pointer to string
 */
char *argstostr(int ac, char **av)
{
	int i, j, p_len = 0, len = 0;
	char *str = NULL, *tmp = NULL;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len = p_len + _str_length(*(av + i)) + 2;
		tmp = malloc(len * sizeof(char)); /* 2 for \0 and \n */

		/* quit if malloc fails */
		if (tmp == NULL)
		{
			if (str != NULL)
			{
				/* release str if anything was allocated */
				free(str);
			}
			return (NULL);
		}

		/* copy over what is currently in str */
		for (j = 0; j < p_len; j++)	/* p_len won't touch \0 (<)*/
		{
			*(tmp + j) = *(str + j);
		}
		/* copy over the command line argument from p_len */
		for (; j < len - 2; j++)
		{
			*(tmp + j) = *(*(av + i) + (j - p_len));
		}

		*(tmp + j) = '\n';
		*(tmp + j + 1) = '\0';

		if (str != NULL)
		{
			free(str);
		}

		str = tmp;
		p_len = len - 1; /* for \n and not \0 */
	}

	return (str);
}

/**
 * _str_length - return the length of a string
 * @s: string to find length of
 *
 * Return: length of string
 */
int _str_length(char *s)
{
	int len = 0;

	if (s == NULL)
	{
		return (0);
	}

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
